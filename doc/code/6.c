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
	ShowNumOFF();
	OLED_P8x16Str(0,0," RESET NOW  ");
	delay_long();
	OLED_P8x16Str(0,0,"            ");
	BOARD_I2C_GPIO(0);
}