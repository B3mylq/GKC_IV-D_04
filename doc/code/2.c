void APPTICK_PIT_HANDLER(void)
{
    /* Clear interrupt flag.*/
    PIT_ClearStatusFlags(PIT, kPIT_Chnl_0, kPIT_TimerFlag);
    appTick++;
    appTick2++;
    if(beepFlag && (beepCnt < beepGap))
    {
    	beepCnt++;
    }
    else BEEP_OFF();

#if defined __CORTEX_M && (__CORTEX_M == 4U)
    __DSB();
#endif
}