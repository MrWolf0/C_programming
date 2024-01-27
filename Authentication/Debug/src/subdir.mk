################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Authentication.c \
../src/handling_errors.c 

C_DEPS += \
./src/Authentication.d \
./src/handling_errors.d 

OBJS += \
./src/Authentication.o \
./src/handling_errors.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Authentication.d ./src/Authentication.o ./src/handling_errors.d ./src/handling_errors.o

.PHONY: clean-src

