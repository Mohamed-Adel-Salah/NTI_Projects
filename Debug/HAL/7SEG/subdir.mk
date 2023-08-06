################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/7SEG/7SEG_prog.c 

OBJS += \
./HAL/7SEG/7SEG_prog.o 

C_DEPS += \
./HAL/7SEG/7SEG_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/7SEG/%.o: ../HAL/7SEG/%.c HAL/7SEG/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\COTS\HAL\7SEG" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\SEG_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\LIB" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\KEYBAD" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\EXT_INT" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\USART" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\Timer1" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\Timer0" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


