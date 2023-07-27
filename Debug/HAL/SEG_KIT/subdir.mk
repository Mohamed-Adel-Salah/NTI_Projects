################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/SEG_KIT/SEG_KIT_prog.c 

OBJS += \
./HAL/SEG_KIT/SEG_KIT_prog.o 

C_DEPS += \
./HAL/SEG_KIT/SEG_KIT_prog.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/SEG_KIT/%.o: ../HAL/SEG_KIT/%.c HAL/SEG_KIT/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\COTS\HAL\7SEG" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\SEG_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\LIB" -I"C:\Users\hp\Desktop\NTI\COTS\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\COTS\HAL\KEYBAD" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


