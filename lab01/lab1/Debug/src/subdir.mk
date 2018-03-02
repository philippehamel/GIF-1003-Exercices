################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bug_1.cpp \
../src/Bug_2.cpp \
../src/Bug_3.cpp \
../src/Bug_4.cpp \
../src/Bug_5.cpp \
../src/lab1.cpp 

OBJS += \
./src/Bug_1.o \
./src/Bug_2.o \
./src/Bug_3.o \
./src/Bug_4.o \
./src/Bug_5.o \
./src/lab1.o 

CPP_DEPS += \
./src/Bug_1.d \
./src/Bug_2.d \
./src/Bug_3.d \
./src/Bug_4.d \
./src/Bug_5.d \
./src/lab1.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


