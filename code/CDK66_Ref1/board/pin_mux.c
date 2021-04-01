/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MK66FN2M0xxx18
package_id: MK66FN2M0VLQ18
mcu_data: ksdk2_0
processor_version: 9.0.0
pin_labels:
- {pin_num: '15', pin_signal: PTE12/I2S0_TX_BCLK/FTM3_CH7, label: BEEP, identifier: BEEP}
- {pin_num: '11', pin_signal: PTE8/I2S0_RXD1/I2S0_RX_FS/LPUART0_TX/FTM3_CH3, label: LED1, identifier: LED1}
- {pin_num: '12', pin_signal: PTE9/LLWU_P17/I2S0_TXD1/I2S0_RX_BCLK/LPUART0_RX/FTM3_CH4, label: LED2, identifier: LED2}
- {pin_num: '137', pin_signal: PTD8/LLWU_P24/I2C0_SCL/LPUART0_RX/FB_A16, label: DSPdp, identifier: DSPdp}
- {pin_num: '138', pin_signal: PTD9/I2C0_SDA/LPUART0_TX/FB_A17, label: DSPa, identifier: DSPa}
- {pin_num: '139', pin_signal: PTD10/LPUART0_RTS_b/FB_A18, label: DSPb, identifier: DSPb}
- {pin_num: '140', pin_signal: PTD11/LLWU_P25/SPI2_PCS0/SDHC0_CLKIN/LPUART0_CTS_b/FB_A19, label: DSPc, identifier: DSPc}
- {pin_num: '141', pin_signal: PTD12/SPI2_SCK/FTM3_FLT0/SDHC0_D4/FB_A20, label: DSPd, identifier: DSPd}
- {pin_num: '142', pin_signal: PTD13/SPI2_SOUT/SDHC0_D5/FB_A21, label: DSPe, identifier: DSPe}
- {pin_num: '143', pin_signal: PTD14/SPI2_SIN/SDHC0_D6/FB_A22, label: DSPf, identifier: DSPf}
- {pin_num: '144', pin_signal: PTD15/SPI2_PCS1/SDHC0_D7/FB_A23, label: DSPg, identifier: DSPg}
- {pin_num: '96', pin_signal: TSI0_CH10/PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/SDRAM_D16/EWM_OUT_b/TPM_CLKIN1, label: KEY1, identifier: KEY1}
- {pin_num: '97', pin_signal: TSI0_CH11/PTB18/CAN0_TX/FTM2_CH0/I2S0_TX_BCLK/FB_AD15/SDRAM_A23/FTM2_QD_PHA/TPM2_CH0, label: KEY2, identifier: KEY2}
- {pin_num: '112', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/USB0_SOF_OUT/I2S0_RX_FS/FB_AD8/SDRAM_A16, label: SW1, identifier: SW1}
- {pin_num: '123', pin_signal: PTC16/CAN1_RX/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b/SDRAM_DQM2, label: SW2, identifier: SW2}
- {pin_num: '124', pin_signal: PTC17/CAN1_TX/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b/SDRAM_DQM3, label: SW3, identifier: SW3}
- {pin_num: '125', pin_signal: PTC18/UART3_RTS_b/ENET0_1588_TMR2/FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b/SDRAM_DQM1, label: SW4, identifier: SW4}
- {pin_num: '99', pin_signal: PTB20/SPI2_PCS0/FB_AD31/SDRAM_D31/CMP0_OUT, label: QESa, identifier: QESa}
- {pin_num: '98', pin_signal: TSI0_CH12/PTB19/CAN0_RX/FTM2_CH1/I2S0_TX_FS/FB_OE_b/FTM2_QD_PHB/TPM2_CH1, label: QESb, identifier: QESb}
- {pin_num: '100', pin_signal: PTB21/SPI2_SCK/FB_AD30/SDRAM_D30/CMP1_OUT, label: QESp, identifier: QESp}
- {pin_num: '14', pin_signal: PTE11/I2C3_SCL/I2S0_TX_FS/LPUART0_RTS_b/FTM3_CH6, label: I2C3_SCL, identifier: I2C3_SCL}
- {pin_num: '13', pin_signal: PTE10/LLWU_P18/I2C3_SDA/I2S0_TXD0/LPUART0_CTS_b/FTM3_CH5/USB1_ID, label: I2C3_SDA, identifier: I2C3_SDA}
- {pin_num: '77', pin_signal: PTA26/MII0_TXD3/FB_A27, label: OLED_SCL, identifier: OLED_SCL}
- {pin_num: '78', pin_signal: PTA27/MII0_CRS/FB_A26, label: OLED_SDA, identifier: OLED_SDA}
- {pin_num: '79', pin_signal: PTA28/MII0_TXER/FB_A25, label: OLED_RST, identifier: OLED_RST}
- {pin_num: '80', pin_signal: PTA29/MII0_COL/FB_A24, label: OLED_DC, identifier: OLED_DC}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '11', peripheral: GPIOE, signal: 'GPIO, 8', pin_signal: PTE8/I2S0_RXD1/I2S0_RX_FS/LPUART0_TX/FTM3_CH3, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '12', peripheral: GPIOE, signal: 'GPIO, 9', pin_signal: PTE9/LLWU_P17/I2S0_TXD1/I2S0_RX_BCLK/LPUART0_RX/FTM3_CH4, direction: OUTPUT, gpio_init_state: 'true',
    pull_select: up}
  - {pin_num: '137', peripheral: GPIOD, signal: 'GPIO, 8', pin_signal: PTD8/LLWU_P24/I2C0_SCL/LPUART0_RX/FB_A16, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '138', peripheral: GPIOD, signal: 'GPIO, 9', pin_signal: PTD9/I2C0_SDA/LPUART0_TX/FB_A17, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '139', peripheral: GPIOD, signal: 'GPIO, 10', pin_signal: PTD10/LPUART0_RTS_b/FB_A18, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '140', peripheral: GPIOD, signal: 'GPIO, 11', pin_signal: PTD11/LLWU_P25/SPI2_PCS0/SDHC0_CLKIN/LPUART0_CTS_b/FB_A19, direction: OUTPUT, gpio_init_state: 'true',
    pull_select: up}
  - {pin_num: '141', peripheral: GPIOD, signal: 'GPIO, 12', pin_signal: PTD12/SPI2_SCK/FTM3_FLT0/SDHC0_D4/FB_A20, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '142', peripheral: GPIOD, signal: 'GPIO, 13', pin_signal: PTD13/SPI2_SOUT/SDHC0_D5/FB_A21, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '143', peripheral: GPIOD, signal: 'GPIO, 14', pin_signal: PTD14/SPI2_SIN/SDHC0_D6/FB_A22, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '144', peripheral: GPIOD, signal: 'GPIO, 15', pin_signal: PTD15/SPI2_PCS1/SDHC0_D7/FB_A23, direction: OUTPUT, gpio_init_state: 'true', pull_select: up}
  - {pin_num: '15', peripheral: GPIOE, signal: 'GPIO, 12', pin_signal: PTE12/I2S0_TX_BCLK/FTM3_CH7, direction: OUTPUT, pull_select: down}
  - {pin_num: '96', peripheral: GPIOB, signal: 'GPIO, 17', pin_signal: TSI0_CH10/PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/SDRAM_D16/EWM_OUT_b/TPM_CLKIN1, direction: INPUT,
    pull_select: up}
  - {pin_num: '97', peripheral: GPIOB, signal: 'GPIO, 18', pin_signal: TSI0_CH11/PTB18/CAN0_TX/FTM2_CH0/I2S0_TX_BCLK/FB_AD15/SDRAM_A23/FTM2_QD_PHA/TPM2_CH0, direction: INPUT,
    pull_select: up}
  - {pin_num: '112', peripheral: GPIOC, signal: 'GPIO, 7', pin_signal: CMP0_IN1/PTC7/SPI0_SIN/USB0_SOF_OUT/I2S0_RX_FS/FB_AD8/SDRAM_A16, direction: INPUT, pull_select: up}
  - {pin_num: '123', peripheral: GPIOC, signal: 'GPIO, 16', pin_signal: PTC16/CAN1_RX/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b/SDRAM_DQM2,
    direction: INPUT, pull_select: up}
  - {pin_num: '124', peripheral: GPIOC, signal: 'GPIO, 17', pin_signal: PTC17/CAN1_TX/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b/SDRAM_DQM3, direction: INPUT,
    pull_select: up}
  - {pin_num: '125', peripheral: GPIOC, signal: 'GPIO, 18', pin_signal: PTC18/UART3_RTS_b/ENET0_1588_TMR2/FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b/SDRAM_DQM1, direction: INPUT,
    pull_select: up}
  - {pin_num: '99', peripheral: GPIOB, signal: 'GPIO, 20', pin_signal: PTB20/SPI2_PCS0/FB_AD31/SDRAM_D31/CMP0_OUT, direction: INPUT, gpio_interrupt: kPORT_InterruptEitherEdge,
    pull_select: up}
  - {pin_num: '98', peripheral: GPIOB, signal: 'GPIO, 19', pin_signal: TSI0_CH12/PTB19/CAN0_RX/FTM2_CH1/I2S0_TX_FS/FB_OE_b/FTM2_QD_PHB/TPM2_CH1, direction: INPUT,
    gpio_interrupt: kPORT_InterruptOrDMADisabled, pull_select: up}
  - {pin_num: '100', peripheral: GPIOB, signal: 'GPIO, 21', pin_signal: PTB21/SPI2_SCK/FB_AD30/SDRAM_D30/CMP1_OUT, direction: INPUT, pull_select: up}
  - {pin_num: '14', peripheral: I2C3, signal: SCL, pin_signal: PTE11/I2C3_SCL/I2S0_TX_FS/LPUART0_RTS_b/FTM3_CH6, open_drain: enable, pull_select: up}
  - {pin_num: '13', peripheral: I2C3, signal: SDA, pin_signal: PTE10/LLWU_P18/I2C3_SDA/I2S0_TXD0/LPUART0_CTS_b/FTM3_CH5/USB1_ID, open_drain: enable, pull_select: up}
  - {pin_num: '77', peripheral: GPIOA, signal: 'GPIO, 26', pin_signal: PTA26/MII0_TXD3/FB_A27, direction: OUTPUT}
  - {pin_num: '78', peripheral: GPIOA, signal: 'GPIO, 27', pin_signal: PTA27/MII0_CRS/FB_A26, direction: OUTPUT}
  - {pin_num: '79', peripheral: GPIOA, signal: 'GPIO, 28', pin_signal: PTA28/MII0_TXER/FB_A25, direction: OUTPUT}
  - {pin_num: '80', peripheral: GPIOA, signal: 'GPIO, 29', pin_signal: PTA29/MII0_COL/FB_A24, direction: OUTPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t OLED_SCL_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA26 (pin 77)  */
    GPIO_PinInit(BOARD_INITPINS_OLED_SCL_GPIO, BOARD_INITPINS_OLED_SCL_PIN, &OLED_SCL_config);

    gpio_pin_config_t OLED_SDA_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA27 (pin 78)  */
    GPIO_PinInit(BOARD_INITPINS_OLED_SDA_GPIO, BOARD_INITPINS_OLED_SDA_PIN, &OLED_SDA_config);

    gpio_pin_config_t OLED_RST_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA28 (pin 79)  */
    GPIO_PinInit(BOARD_INITPINS_OLED_RST_GPIO, BOARD_INITPINS_OLED_RST_PIN, &OLED_RST_config);

    gpio_pin_config_t OLED_DC_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTA29 (pin 80)  */
    GPIO_PinInit(BOARD_INITPINS_OLED_DC_GPIO, BOARD_INITPINS_OLED_DC_PIN, &OLED_DC_config);

    gpio_pin_config_t KEY1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB17 (pin 96)  */
    GPIO_PinInit(BOARD_INITPINS_KEY1_GPIO, BOARD_INITPINS_KEY1_PIN, &KEY1_config);

    gpio_pin_config_t KEY2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB18 (pin 97)  */
    GPIO_PinInit(BOARD_INITPINS_KEY2_GPIO, BOARD_INITPINS_KEY2_PIN, &KEY2_config);

    gpio_pin_config_t QESb_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB19 (pin 98)  */
    GPIO_PinInit(BOARD_INITPINS_QESb_GPIO, BOARD_INITPINS_QESb_PIN, &QESb_config);

    gpio_pin_config_t QESa_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB20 (pin 99)  */
    GPIO_PinInit(BOARD_INITPINS_QESa_GPIO, BOARD_INITPINS_QESa_PIN, &QESa_config);

    gpio_pin_config_t QESp_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTB21 (pin 100)  */
    GPIO_PinInit(BOARD_INITPINS_QESp_GPIO, BOARD_INITPINS_QESp_PIN, &QESp_config);

    gpio_pin_config_t SW1_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC7 (pin 112)  */
    GPIO_PinInit(BOARD_INITPINS_SW1_GPIO, BOARD_INITPINS_SW1_PIN, &SW1_config);

    gpio_pin_config_t SW2_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC16 (pin 123)  */
    GPIO_PinInit(BOARD_INITPINS_SW2_GPIO, BOARD_INITPINS_SW2_PIN, &SW2_config);

    gpio_pin_config_t SW3_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC17 (pin 124)  */
    GPIO_PinInit(BOARD_INITPINS_SW3_GPIO, BOARD_INITPINS_SW3_PIN, &SW3_config);

    gpio_pin_config_t SW4_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC18 (pin 125)  */
    GPIO_PinInit(BOARD_INITPINS_SW4_GPIO, BOARD_INITPINS_SW4_PIN, &SW4_config);

    gpio_pin_config_t DSPdp_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD8 (pin 137)  */
    GPIO_PinInit(BOARD_INITPINS_DSPdp_GPIO, BOARD_INITPINS_DSPdp_PIN, &DSPdp_config);

    gpio_pin_config_t DSPa_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD9 (pin 138)  */
    GPIO_PinInit(BOARD_INITPINS_DSPa_GPIO, BOARD_INITPINS_DSPa_PIN, &DSPa_config);

    gpio_pin_config_t DSPb_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD10 (pin 139)  */
    GPIO_PinInit(BOARD_INITPINS_DSPb_GPIO, BOARD_INITPINS_DSPb_PIN, &DSPb_config);

    gpio_pin_config_t DSPc_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD11 (pin 140)  */
    GPIO_PinInit(BOARD_INITPINS_DSPc_GPIO, BOARD_INITPINS_DSPc_PIN, &DSPc_config);

    gpio_pin_config_t DSPd_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD12 (pin 141)  */
    GPIO_PinInit(BOARD_INITPINS_DSPd_GPIO, BOARD_INITPINS_DSPd_PIN, &DSPd_config);

    gpio_pin_config_t DSPe_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD13 (pin 142)  */
    GPIO_PinInit(BOARD_INITPINS_DSPe_GPIO, BOARD_INITPINS_DSPe_PIN, &DSPe_config);

    gpio_pin_config_t DSPf_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD14 (pin 143)  */
    GPIO_PinInit(BOARD_INITPINS_DSPf_GPIO, BOARD_INITPINS_DSPf_PIN, &DSPf_config);

    gpio_pin_config_t DSPg_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTD15 (pin 144)  */
    GPIO_PinInit(BOARD_INITPINS_DSPg_GPIO, BOARD_INITPINS_DSPg_PIN, &DSPg_config);

    gpio_pin_config_t LED1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTE8 (pin 11)  */
    GPIO_PinInit(BOARD_INITPINS_LED1_GPIO, BOARD_INITPINS_LED1_PIN, &LED1_config);

    gpio_pin_config_t LED2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTE9 (pin 12)  */
    GPIO_PinInit(BOARD_INITPINS_LED2_GPIO, BOARD_INITPINS_LED2_PIN, &LED2_config);

    gpio_pin_config_t BEEP_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTE12 (pin 15)  */
    GPIO_PinInit(BOARD_INITPINS_BEEP_GPIO, BOARD_INITPINS_BEEP_PIN, &BEEP_config);

    /* PORTA26 (pin 77) is configured as PTA26 */
    PORT_SetPinMux(BOARD_INITPINS_OLED_SCL_PORT, BOARD_INITPINS_OLED_SCL_PIN, kPORT_MuxAsGpio);

    /* PORTA27 (pin 78) is configured as PTA27 */
    PORT_SetPinMux(BOARD_INITPINS_OLED_SDA_PORT, BOARD_INITPINS_OLED_SDA_PIN, kPORT_MuxAsGpio);

    /* PORTA28 (pin 79) is configured as PTA28 */
    PORT_SetPinMux(BOARD_INITPINS_OLED_RST_PORT, BOARD_INITPINS_OLED_RST_PIN, kPORT_MuxAsGpio);

    /* PORTA29 (pin 80) is configured as PTA29 */
    PORT_SetPinMux(BOARD_INITPINS_OLED_DC_PORT, BOARD_INITPINS_OLED_DC_PIN, kPORT_MuxAsGpio);

    /* PORTB17 (pin 96) is configured as PTB17 */
    PORT_SetPinMux(BOARD_INITPINS_KEY1_PORT, BOARD_INITPINS_KEY1_PIN, kPORT_MuxAsGpio);

    PORTB->PCR[17] = ((PORTB->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTB18 (pin 97) is configured as PTB18 */
    PORT_SetPinMux(BOARD_INITPINS_KEY2_PORT, BOARD_INITPINS_KEY2_PIN, kPORT_MuxAsGpio);

    PORTB->PCR[18] = ((PORTB->PCR[18] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTB19 (pin 98) is configured as PTB19 */
    PORT_SetPinMux(BOARD_INITPINS_QESb_PORT, BOARD_INITPINS_QESb_PIN, kPORT_MuxAsGpio);

    /* Interrupt configuration on PORTB19 (pin 98): Interrupt/DMA request is disabled */
    PORT_SetPinInterruptConfig(BOARD_INITPINS_QESb_PORT, BOARD_INITPINS_QESb_PIN, kPORT_InterruptOrDMADisabled);

    PORTB->PCR[19] = ((PORTB->PCR[19] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTB20 (pin 99) is configured as PTB20 */
    PORT_SetPinMux(BOARD_INITPINS_QESa_PORT, BOARD_INITPINS_QESa_PIN, kPORT_MuxAsGpio);

    /* Interrupt configuration on PORTB20 (pin 99): Interrupt on either edge */
    PORT_SetPinInterruptConfig(BOARD_INITPINS_QESa_PORT, BOARD_INITPINS_QESa_PIN, kPORT_InterruptEitherEdge);

    PORTB->PCR[20] = ((PORTB->PCR[20] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTB21 (pin 100) is configured as PTB21 */
    PORT_SetPinMux(BOARD_INITPINS_QESp_PORT, BOARD_INITPINS_QESp_PIN, kPORT_MuxAsGpio);

    PORTB->PCR[21] = ((PORTB->PCR[21] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTC16 (pin 123) is configured as PTC16 */
    PORT_SetPinMux(BOARD_INITPINS_SW2_PORT, BOARD_INITPINS_SW2_PIN, kPORT_MuxAsGpio);

    PORTC->PCR[16] = ((PORTC->PCR[16] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTC17 (pin 124) is configured as PTC17 */
    PORT_SetPinMux(BOARD_INITPINS_SW3_PORT, BOARD_INITPINS_SW3_PIN, kPORT_MuxAsGpio);

    PORTC->PCR[17] = ((PORTC->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTC18 (pin 125) is configured as PTC18 */
    PORT_SetPinMux(BOARD_INITPINS_SW4_PORT, BOARD_INITPINS_SW4_PIN, kPORT_MuxAsGpio);

    PORTC->PCR[18] = ((PORTC->PCR[18] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTC7 (pin 112) is configured as PTC7 */
    PORT_SetPinMux(BOARD_INITPINS_SW1_PORT, BOARD_INITPINS_SW1_PIN, kPORT_MuxAsGpio);

    PORTC->PCR[7] = ((PORTC->PCR[7] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD10 (pin 139) is configured as PTD10 */
    PORT_SetPinMux(BOARD_INITPINS_DSPb_PORT, BOARD_INITPINS_DSPb_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[10] = ((PORTD->PCR[10] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD11 (pin 140) is configured as PTD11 */
    PORT_SetPinMux(BOARD_INITPINS_DSPc_PORT, BOARD_INITPINS_DSPc_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[11] = ((PORTD->PCR[11] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD12 (pin 141) is configured as PTD12 */
    PORT_SetPinMux(BOARD_INITPINS_DSPd_PORT, BOARD_INITPINS_DSPd_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[12] = ((PORTD->PCR[12] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD13 (pin 142) is configured as PTD13 */
    PORT_SetPinMux(BOARD_INITPINS_DSPe_PORT, BOARD_INITPINS_DSPe_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[13] = ((PORTD->PCR[13] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD14 (pin 143) is configured as PTD14 */
    PORT_SetPinMux(BOARD_INITPINS_DSPf_PORT, BOARD_INITPINS_DSPf_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[14] = ((PORTD->PCR[14] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD15 (pin 144) is configured as PTD15 */
    PORT_SetPinMux(BOARD_INITPINS_DSPg_PORT, BOARD_INITPINS_DSPg_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[15] = ((PORTD->PCR[15] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD8 (pin 137) is configured as PTD8 */
    PORT_SetPinMux(BOARD_INITPINS_DSPdp_PORT, BOARD_INITPINS_DSPdp_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[8] = ((PORTD->PCR[8] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));

    /* PORTD9 (pin 138) is configured as PTD9 */
    PORT_SetPinMux(BOARD_INITPINS_DSPa_PORT, BOARD_INITPINS_DSPa_PIN, kPORT_MuxAsGpio);

    PORTD->PCR[9] = ((PORTD->PCR[9] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));

    /* PORTE10 (pin 13) is configured as I2C3_SDA */
    PORT_SetPinMux(BOARD_INITPINS_I2C3_SDA_PORT, BOARD_INITPINS_I2C3_SDA_PIN, kPORT_MuxAlt2);

    PORTE->PCR[10] = ((PORTE->PCR[10] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

                      /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_ODE(kPORT_OpenDrainEnable)

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTE11 (pin 14) is configured as I2C3_SCL */
    PORT_SetPinMux(BOARD_INITPINS_I2C3_SCL_PORT, BOARD_INITPINS_I2C3_SCL_PIN, kPORT_MuxAlt2);

    PORTE->PCR[11] = ((PORTE->PCR[11] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ODE_MASK | PORT_PCR_ISF_MASK)))

                      /* Open Drain Enable: Open drain output is enabled on the corresponding pin, if the pin is
                       * configured as a digital output. */
                      | PORT_PCR_ODE(kPORT_OpenDrainEnable)

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullUp));

    /* PORTE12 (pin 15) is configured as PTE12 */
    PORT_SetPinMux(BOARD_INITPINS_BEEP_PORT, BOARD_INITPINS_BEEP_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[12] = ((PORTE->PCR[12] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | PORT_PCR_PS(kPORT_PullDown));

    /* PORTE8 (pin 11) is configured as PTE8 */
    PORT_SetPinMux(BOARD_INITPINS_LED1_PORT, BOARD_INITPINS_LED1_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[8] = ((PORTE->PCR[8] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));

    /* PORTE9 (pin 12) is configured as PTE9 */
    PORT_SetPinMux(BOARD_INITPINS_LED2_PORT, BOARD_INITPINS_LED2_PIN, kPORT_MuxAsGpio);

    PORTE->PCR[9] = ((PORTE->PCR[9] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/