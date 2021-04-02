void Task1(void)
{
	OLED_P8x16Str(0,0,"          ");
	BOARD_I2C_GPIO(0);
	if (KEY1())
	{
		ResetFlag = 0;
		delay();//avoid shifting accidents
	}
	else
	{
		if(!ResetFlag)
		{
			Var1 = -1;//inital value -1 can display 0 for 1 sec
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
	if((appTick2%200) == 0)
	{
		if(!stopFlag) Var1++;
		ShowNumHEX(Var1);
		if(Var1 == CountMAX && !beepFlag) {
			BEEP_ON();
			beepFlag = 1;
		}
		while ((appTick2%200) == 0) {}
	}
}