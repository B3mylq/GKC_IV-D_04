/*
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
/**
 * @file    CDK66_Ref1.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include <string.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK66F18.h"
#include "fsl_gpio.h"
#include "fsl_uart.h"
#include "fsl_pit.h"
#include "fsl_rtc.h"
#include "fsl_i2c.h"

#include "CDK66_OLED.h"

int beepFlag = 0;
uint16_t beepCnt = 0;
const uint16_t beepGap = 50;
static uint32_t sw1Flag = 1;
uint8_t ResetFlag = 0;
uint8_t stopFlag = 0;
uint8_t TS2ResetFlag = 0;
uint16_t CountMAX = 10;
uint8_t QESPFlag = 1;
uint16_t Var1 = 0;
uint8_t INTF = 0;
uint16_t DetectSig = 0;
uint8_t INTF2 = 0;

/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */
static uint8_t DSPTable[] = { 0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10, 0x08, 0x03, 0x27, 0x21, 0x06, 0x0E };
volatile static uint32_t appTick;		// tick at an interval of 5ms
volatile static uint32_t appTick2;		// tick at an interval of 5ms
volatile static uint32_t Var2 = 0;		// Variable controlled by QES
void delay_in(int time)
{
	time *= 1000;
	while(time > 0) --time;
}
void InitPITs() {
    pit_config_t pitConfig;

    PIT_GetDefaultConfig(&pitConfig);
    PIT_Init(PIT, &pitConfig);
    /* Set timer period for channel 0: 5000us = 5ms */
    PIT_SetTimerPeriod(PIT, kPIT_Chnl_0, USEC_TO_COUNT(5000U, APPTICK_PIT_SOURCE_CLOCK));
    /* Enable timer interrupts for channel 0 */
    PIT_EnableInterrupts(PIT, kPIT_Chnl_0, kPIT_TimerInterruptEnable);
    /* Enable at the NVIC */
    EnableIRQ(APPTICK_PIT_IRQn);
    /* Start channel 0 */
    PIT_StartTimer(PIT, kPIT_Chnl_0);
    appTick = 0;
    appTick2 = 0;
}

void ShowNumHEX(uint8_t num) {
	uint16_t l;
	l = DSPTable[num & 0x0F];

	// DSP: PD9~PD15
	GPIO_PortSet(BOARD_INITPINS_DSPa_GPIO, 0x7F << BOARD_INITPINS_DSPa_PIN);	// turn off all DSP segments
	GPIO_PortClear(BOARD_INITPINS_DSPa_GPIO, ((~l)&0x7F) << BOARD_INITPINS_DSPa_PIN);	// turn on the code segments
}

void ShowNumDEC(uint8_t num) {
	uint16_t l;
	l = DSPTable[num % 10];

	// DSP: PD9~PD15
	GPIO_PortSet(BOARD_INITPINS_DSPa_GPIO, 0x7F << BOARD_INITPINS_DSPa_PIN);	// turn off all DSP segments
	GPIO_PortClear(BOARD_INITPINS_DSPa_GPIO, ((~l)&0x7F) << BOARD_INITPINS_DSPa_PIN);	// turn on the code segments
}

void ShowNumOFF(void) {
	// DSP: PD9~PD15
	GPIO_PortSet(BOARD_INITPINS_DSPa_GPIO, 0x7F << BOARD_INITPINS_DSPa_PIN);	// turn off all DSP segments
}

// appTicks increasing at an interval of 5ms
void APPTICK_PIT_HANDLER(void)
{
    /* Clear interrupt flag.*/
    PIT_ClearStatusFlags(PIT, kPIT_Chnl_0, kPIT_TimerFlag);
    appTick++;
    appTick2++;
    DetectSig++;
    if(beepFlag && (beepCnt < beepGap))
    {
    	beepCnt++;
    }
    else BEEP_OFF();

#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}

/* PORTB_IRQn interrupt handler */
void BOARD_RESa_IRQ_HANDLER(void)
{
    /* Clear external interrupt flag. */
	GPIO_PortClearInterruptFlags(BOARD_INITPINS_QESa_GPIO, BOARD_INITPINS_QESa_GPIO_PIN_MASK);

    if(QESA() && !INTF)
    {
    	if (!QESB()) Var2++;
    	else if (Var2 > 0) Var2--;
    	INTF = 1;
    }
    else if(!QESA())
    {
    	INTF = 0;
    }
    delay();//Delete this line if unnecessary.
	/*if(!INTF)
	{
		INTF = 1;
		INTF2 = 0;
		if(!QESB()) Var2++;
		else if (Var2 > 0) Var2--;
	}*/


#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}

//void BOARD_RESb_IRQ_HANDLER(void)
//{
    /* Clear external interrupt flag. */
/*	GPIO_PortClearInterruptFlags(BOARD_INITPINS_QESb_GPIO, BOARD_INITPINS_QESb_GPIO_PIN_MASK);
	if(!INTF2)
	{
		INTF2 = 1;
		INTF = 0;
	}


#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}*/
//Task 1: use S1 & S2 to control the board
void Task1(void)
{
	OLED_P8x16Str(0,0,"          ");
	BOARD_I2C_GPIO(0);
	if (KEY1())
    {
    	//BEEP_OFF();
    	ResetFlag = 0;
    	delay();
    }
    else
    {
    	//BEEP_ON();
    	if(!ResetFlag)
    	{
    		Var1 = -1;
    		appTick2 = 0;
    		ResetFlag = 1;
    		beepCnt = beepFlag = stopFlag = 0;
    		BEEP_OFF();
    	}
    }
    if (!KEY2())
    {
    	stopFlag = 1;
    	BEEP_OFF();
    }

    //ShowNumDEC(Var2);

    if((appTick2%200) == 0)
    {
    	if(!stopFlag) Var1++;
    	//if(!beepFlag) beepCnt ++;
        ShowNumHEX(Var1);
        //testCode = 0x01U << (tempInt%0x10U);
        //testCode = Var1;
    	//BOARD_I2C_GPIO(testCode);
        if(Var1 == CountMAX && !beepFlag) {
        	BEEP_ON();
        	beepFlag = 1;
        }

        while ((appTick2%200) == 0) {}
    }
}

void Task2(void)
{
	//OLED_Init();
	ShowNumOFF();
	if(QESP())
	{
		QESPFlag = 1;
		delay();//in order to avoid accidents
	}
	else if(!QESP() && QESPFlag){
		Var2 = 0x80;
		QESPFlag = 0;
	}
	OLED_Print_Num(0,0,Var2);
	BOARD_I2C_GPIO(Var2);
}
/*
 * @brief   Application entry point.
 */

//initialize flag and count variables while facing status change
/* Important Notice!!!!!!!!!!
 * If the mission does not require initialization,
 * Please delete the codes in main -> while(1) -> if(sw1Flag != SW1())
 */
void initVar(void)
{
	beepFlag	 =	 0;
	beepCnt 	 =	 0;
	ResetFlag 	 =	 0;
	stopFlag	 =	 0;
	appTick		 =	 0;
	appTick2	 =	 0;
	Var1		 =	 0;
	Var2		 =	 0;
	QESPFlag	 =	 1;
	INTF		 =	 0;
	//INTF2		 =	 1;
	ShowNumOFF();
	//OLED_P8x16Str(0,0," RESET NOW  ");
	BOARD_I2C_GPIO(0);
}
int main(void) {

	uint16_t testCode = 0;

  	/* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();

    BOARD_InitI2C();
    BOARD_InitRTC();
    delay();

    OLED_Init();
    InitPITs();
	EnableIRQ(BOARD_RESa_IRQ);
	//EnableIRQ(BOARD_RESb_IRQ);
	delay();

    //OLED_P8x16Str(0,0,"## Hello World ##");
    delay();

	BEEP_ON();
	delay_short();
	BEEP_OFF();
    ShowNumOFF();

    //printf("Hello World\n");

	/* Enter an infinite loop, just incrementing a counter. */
    while(1) {

    	if(sw1Flag != SW1())
    	{
    		initVar();
    	}
    	if(SW1())
    	{
    		Task1();
    	}
    	else Task2();

    	sw1Flag = SW1();
    }
    return 0 ;
}
