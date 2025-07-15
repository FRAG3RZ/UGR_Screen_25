cmake_minimum_required(VERSION 3.22)

project(UGR_Screen_25 LANGUAGES C ASM)
add_library(stm32cubemx INTERFACE)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard")
set(CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard")


# Enable CMake support for ASM and C languages
enable_language(C ASM)

target_compile_definitions(stm32cubemx INTERFACE 
	USE_HAL_DRIVER 
	STM32F405xx
    $<$<CONFIG:Debug>:DEBUG>
)

target_compile_definitions(stm32cubemx INTERFACE STM32F405xx USE_HAL_DRIVER)


target_include_directories(stm32cubemx INTERFACE
    Core/Inc
    Drivers/STM32F4xx_HAL_Driver/Inc
    Drivers/STM32F4xx_HAL_Driver/Inc/Legacy
    Drivers/CMSIS/Device/ST/STM32F4xx/Include
    Drivers/CMSIS/Include
)

target_sources(stm32cubemx INTERFACE
    Core/Src/main.c
    Core/Src/stm32f4xx_it.c
    Core/Src/stm32f4xx_hal_msp.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_can.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_rcc_ex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_flash_ramfunc.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_gpio.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma_ex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_dma.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_pwr_ex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_cortex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_exti.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_tim_ex.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_hal_hcd.c
    Drivers/STM32F4xx_HAL_Driver/Src/stm32f4xx_ll_usb.c
    Core/Src/system_stm32f4xx.c
    Core/Src/sysmem.c
    Core/Src/syscalls.c
    startup_stm32f405xx.s
)

target_link_directories(stm32cubemx INTERFACE
)



set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/STM32F405RGTx_FLASH.ld)

add_executable(UGR_Screen_25
    Core/Src/main.c
    startup_stm32f405xx.s
)

# Set full paths to tools
set(OBJCOPY_PATH "C:/Program Files (x86)/Arm GNU Toolchain arm-none-eabi/14.3 rel1/bin/arm-none-eabi-objcopy.exe")
set(PROGRAMMER_CLI "C:/Program Files/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin/STM32_Programmer_CLI.exe")

# Post-build step: convert ELF to BIN and flash to STM32
add_custom_command(TARGET UGR_Screen_25 POST_BUILD
    COMMAND "${OBJCOPY_PATH}" -O binary
        ${CMAKE_CURRENT_BINARY_DIR}/UGR_Screen_25.elf
        ${CMAKE_CURRENT_BINARY_DIR}/UGR_Screen_25.bin
    COMMENT "✓ Converting ELF to BIN"

    COMMAND "${PROGRAMMER_CLI}"
        -c port=SWD
        -w ${CMAKE_CURRENT_BINARY_DIR}/UGR_Screen_25.bin 0x08000000
        -rst
    COMMENT "✓ Flashing to STM32F405 via ST-Link"
)


target_link_libraries(UGR_Screen_25 PRIVATE stm32cubemx)

set(LINKER_SCRIPT ${CMAKE_SOURCE_DIR}/STM32F405RGTx_FLASH.ld)  # Replace with your actual .ld file

target_link_options(UGR_Screen_25 PRIVATE
    "-T${LINKER_SCRIPT}"
    "-Wl,--gc-sections"
    "--specs=nano.specs"
    "--specs=nosys.specs"
)


# Validate that STM32CubeMX code is compatible with C standard
if(CMAKE_C_STANDARD LESS 11)
    message(ERROR "Generated code requires C11 or higher")
endif()