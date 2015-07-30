################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Stones\ on\ the\ Table.cpp 

OBJS += \
./src/Stones\ on\ the\ Table.o 

CPP_DEPS += \
./src/Stones\ on\ the\ Table.d 


# Each subdirectory must supply rules for building sources it contributes
src/Stones\ on\ the\ Table.o: ../src/Stones\ on\ the\ Table.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Stones on the Table.d" -MT"src/Stones\ on\ the\ Table.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


