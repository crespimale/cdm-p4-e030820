/*-----------------------------------------------------------*-
						TPM.c (v1.00)
-*-------------------------------------------------------------
	DETALLES:
	– Implementación de inicialización del periférico TPM
	AUTOR:
	- Crespi, Malena Nerea
-------------------------------------------------------------*/
#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "TPM.h"
/*-----------------------------------------------------------*-
 * TPM_Init()
 * 	- Descripción: Inicializa el periférico TPM
 * 	- Parámetros: Ninguno
 * 	- Retorno: Ninguno
-------------------------------------------------------------*/
void TPM_Init() {
	/* ### Init_TPM init code */
	(void)(TPM1C1SC == 0U);	/* Channel 0 int. flag clearing (first part) */
	/* TPM1C1SC: CH1F=0,CH1IE=0,MS1B=1,MS1A=0,ELS1B=1,ELS1A=0 */
	TPM1C1SC = 0x28U;	/* Int. flag clearing (2nd part) and channel 0 contr. register setting */
	TPM1C1V = 0x00U;	/* Compare 0 value setting */
	/* TPM1SC: TOF=0,TOIE=0,CPWMS=0,CLKSB=0,CLKSA=0,PS2=0,PS1=0,PS0=0 */
	TPM1SC = 0x00U;	/* Stop and reset counter */
	TPM1MOD = 0xFFU;	/* Period value setting */
	(void)(TPM1SC == 0U);	/* Overflow int. flag clearing (first part) */
	/* TPM1SC: TOF=0,TOIE=0,CPWMS=0,CLKSB=0,CLKSA=1,PS2=0,PS1=0,PS0=0 */
	TPM1SC = 0x08U;	/* Int. flag clearing (2nd part) and timer control register setting */
	/* ### */
}
/*-----------------------------------------------------------*-
						FIN DEL ARCHIVO
-*-----------------------------------------------------------*/
