################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/CDK66_OLED.c \
../source/CDK66_Ref1.c \
../source/semihost_hardfault.c 

OBJS += \
./source/CDK66_OLED.o \
./source/CDK66_Ref1.o \
./source/semihost_hardfault.o 

C_DEPS += \
./source/CDK66_OLED.d \
./source/CDK66_Ref1.d \
./source/semihost_hardfault.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MK66FN2M0VLQ18 -DCPU_MK66FN2M0VLQ18_cm4 -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSDK_DEBUGCONSOLE=0 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=1 -DFSL_RTOS_FREE_RTOS -DSDK_OS_FREE_RTOS -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSERIAL_PORT_TYPE_UART=1 -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\drivers" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\source" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\device" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\CMSIS" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\component\lists" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1\board" -I"E:\prepare\CDK66_Ref1\CDK66_Ref1" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


