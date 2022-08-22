################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/ADC.c" \
"../Sources/DIMMER.c" \
"../Sources/MCUinit.c" \
"../Sources/TPM.c" \
"../Sources/main.c" \

C_SRCS += \
../Sources/ADC.c \
../Sources/DIMMER.c \
../Sources/MCUinit.c \
../Sources/TPM.c \
../Sources/main.c \

OBJS += \
./Sources/ADC_c.obj \
./Sources/DIMMER_c.obj \
./Sources/MCUinit_c.obj \
./Sources/TPM_c.obj \
./Sources/main_c.obj \

OBJS_QUOTED += \
"./Sources/ADC_c.obj" \
"./Sources/DIMMER_c.obj" \
"./Sources/MCUinit_c.obj" \
"./Sources/TPM_c.obj" \
"./Sources/main_c.obj" \

C_DEPS += \
./Sources/ADC_c.d \
./Sources/DIMMER_c.d \
./Sources/MCUinit_c.d \
./Sources/TPM_c.d \
./Sources/main_c.d \

OBJS_OS_FORMAT += \
./Sources/ADC_c.obj \
./Sources/DIMMER_c.obj \
./Sources/MCUinit_c.obj \
./Sources/TPM_c.obj \
./Sources/main_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/ADC_c.obj: ../Sources/ADC.c
	@echo 'Building file: $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/ADC.args" -ObjN="Sources/ADC_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/DIMMER_c.obj: ../Sources/DIMMER.c
	@echo 'Building file: $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/DIMMER.args" -ObjN="Sources/DIMMER_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/MCUinit_c.obj: ../Sources/MCUinit.c
	@echo 'Building file: $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/MCUinit.args" -ObjN="Sources/MCUinit_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/TPM_c.obj: ../Sources/TPM.c
	@echo 'Building file: $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/TPM.args" -ObjN="Sources/TPM_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/main.args" -ObjN="Sources/main_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


