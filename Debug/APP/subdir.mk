################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/main.c 

OBJS += \
./APP/main.o 

C_DEPS += \
./APP/main.d 


# Each subdirectory must supply rules for building sources it contributes
APP/%.o: ../APP/%.c APP/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\COTS\HAL\7SEG" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\SEG_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\LIB" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\KEYBAD" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\EXT_INT" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\USART" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\Timer1" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\Timer0" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\SPI" -I"C:\Users\hp\Desktop\NTI\COTS\Free RTOS" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


