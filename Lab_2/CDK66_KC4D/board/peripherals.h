/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_adc16.h"
#include "fsl_clock.h"
#include "fsl_ftm.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for BOARD_InitPeripherals functional group */
/* Used DMA device. */
#define DMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DMA_DMAMUX_BASEADDR DMAMUX

  /* Channel CH0 definitions */
/* DMA eDMA source request. */
#define DMA_CH0_DMA_REQUEST kDmaRequestMux0PortB
/* Selected eDMA channel number. */
#define DMA_CH0_DMA_CHANNEL 0
/* Alias for ADC0 peripheral */
#define ADC0_PERIPHERAL ADC0
/* ADC0 interrupt vector ID (number). */
#define ADC0_IRQN ADC0_IRQn
/* ADC0 interrupt handler identifier. */
#define ADC0_IRQHANDLER ADC0_IRQHandler
/* Channel 0 (SE.3) conversion control group. */
#define ADC0_CH0_CONTROL_GROUP 0
/* Channel 1 (SE.19) conversion control group. */
#define ADC0_CH1_CONTROL_GROUP 0
/* Channel 2 (SE.14) conversion control group. */
#define ADC0_CH2_CONTROL_GROUP 0
/* Channel 3 (SE.23) conversion control group. */
#define ADC0_CH3_CONTROL_GROUP 0
/* Channel 4 (SE.7b) conversion control group. */
#define ADC0_CH4_CONTROL_GROUP 0
/* Channel 5 (SE.17) conversion control group. */
#define ADC0_CH5_CONTROL_GROUP 0
/* Channel 6 (SE.19) conversion control group. */
#define ADC0_CH6_CONTROL_GROUP 0
/* Alias for ADC1 peripheral */
#define ADC1_PERIPHERAL ADC1
/* ADC1 interrupt vector ID (number). */
#define ADC1_IRQN ADC1_IRQn
/* ADC1 interrupt handler identifier. */
#define ADC1_IRQHANDLER ADC1_IRQHandler
/* Channel 0 (SE.19) conversion control group. */
#define ADC1_CH0_CONTROL_GROUP 0
/* Channel 1 (SE.18) conversion control group. */
#define ADC1_CH1_CONTROL_GROUP 0
/* Channel 2 (SE.26) conversion control group. */
#define ADC1_CH2_CONTROL_GROUP 0
/* Channel 3 (SE.23) conversion control group. */
#define ADC1_CH3_CONTROL_GROUP 0
/* Definition of peripheral ID */
#define FTM0_PERIPHERAL FTM0
/* Definition of the clock source frequency */
#define FTM0_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* FTM0 interrupt vector ID (number). */
#define FTM0_IRQN FTM0_IRQn
/* FTM0 interrupt handler identifier. */
#define FTM0_IRQHANDLER FTM0_IRQHandler
/* Definition of peripheral ID */
#define FTM3_PERIPHERAL FTM3
/* Definition of the clock source frequency */
#define FTM3_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_BusClk)
/* FTM3 interrupt vector ID (number). */
#define FTM3_IRQN FTM3_IRQn
/* FTM3 interrupt handler identifier. */
#define FTM3_IRQHANDLER FTM3_IRQHandler
/* Alias for GPIOB peripheral */
#define GPIOB_GPIO GPIOB
/* Alias for PORTB */
#define GPIOB_PORT PORTB
/* GPIOB interrupt vector ID (number). */
#define GPIOB_IRQN PORTB_IRQn
/* GPIOB interrupt vector priority. */
#define GPIOB_IRQ_PRIORITY 0
/* GPIOB interrupt handler identifier. */
#define DCAM_IRQHANDLER PORTB_IRQHandler
/* Definition of peripheral ID */
#define UART0_PERIPHERAL UART0
/* Definition of the clock source frequency */
#define UART0_CLOCK_SOURCE CLOCK_GetFreq(UART0_CLK_SRC)
/* UART0 interrupt vector ID (number). */
#define UART0_SERIAL_RX_TX_IRQN UART0_RX_TX_IRQn
/* UART0 interrupt handler identifier. */
#define UART0_SERIAL_RX_TX_IRQHANDLER UART0_RX_TX_IRQHandler
/* UART0 interrupt vector ID (number). */
#define UART0_SERIAL_ERROR_IRQN UART0_ERR_IRQn
/* UART0 interrupt handler identifier. */
#define UART0_SERIAL_ERROR_IRQHANDLER UART0_ERR_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DMA_config;
extern const edma_channel_Preemption_config_t DMA_CH0_preemption_config;
/* Non-transactional transfer configuration */
extern edma_transfer_config_t DMA_CH0_transfer_config;
extern adc16_channel_config_t ADC0_channelsConfig[7];
extern const adc16_config_t ADC0_config;
extern const adc16_channel_mux_mode_t ADC0_muxMode;
extern const adc16_hardware_average_mode_t ADC0_hardwareAverageMode;
extern adc16_channel_config_t ADC1_channelsConfig[4];
extern const adc16_config_t ADC1_config;
extern const adc16_channel_mux_mode_t ADC1_muxMode;
extern const adc16_hardware_average_mode_t ADC1_hardwareAverageMode;
extern const ftm_config_t FTM0_config;
extern const ftm_config_t FTM3_config;
extern const uart_config_t UART0_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void BOARD_InitPeripherals(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
