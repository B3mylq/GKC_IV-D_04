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