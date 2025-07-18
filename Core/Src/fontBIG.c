/**
  ******************************************************************************
  * @file    font24.c
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-February-2014
  * @brief   This file provides text font24 for STM32xx-EVAL's LCD driver. 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "fonts.h"

const uint8_t FontBIG_0_Table [] =
{
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0x3F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 48
		   };
sFONT FontBIG_0 = {
  FontBIG_0_Table,
  32, /* Width */
  64, /* Height */
};

const uint8_t FontBIG_1_Table [] =
{
		0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC, // Code for char num 49
		   };

sFONT FontBIG_1 = {
  FontBIG_1_Table,
  32, /* Width */
  64, /* Height */
};

const uint8_t FontBIG_2_Table [] =
{
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 50
		   };

sFONT FontBIG_2 = {
  FontBIG_2_Table,
  32, /* Width */
  64, /* Height */
};

const uint8_t FontBIG_3_Table [] =
{
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 51

};


sFONT FontBIG_3 = {
  FontBIG_3_Table,
  32, /* Width */
  64, /* Height */
};

const uint8_t FontBIG_4_Table[] = {
		0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC, // Code for char num 52

};

sFONT FontBIG_4 = {
    FontBIG_4_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_5_Table[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 53

};

sFONT FontBIG_5 = {
    FontBIG_5_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_6_Table[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 54

};

sFONT FontBIG_6 = {
    FontBIG_6_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_7_Table[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC, // Code for char num 55

};

sFONT FontBIG_7 = {
    FontBIG_7_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_8_Table[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // Code for char num 56

};

sFONT FontBIG_8 = {
    FontBIG_8_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_9_Table[] = {
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0xFC // Code for char num 57

};

sFONT FontBIG_9 = {
    FontBIG_9_Table,
    32, /* Width */
    64, /* Height */
};

const uint8_t FontBIG_NOT_Table[] = {
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

sFONT FontBIG_NOT = {
    FontBIG_NOT_Table,
    32, /* Width */
    64, /* Height */
};


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
