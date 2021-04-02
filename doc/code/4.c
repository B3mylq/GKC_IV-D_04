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
    Var2 %= 256;
    delay();//Delete this line if unnecessary.
#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}
