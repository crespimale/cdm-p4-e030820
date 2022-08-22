/*-----------------------------------------------------------*-
						DIMMER.c (v1.00)
-*-------------------------------------------------------------
	DETALLES:
	– Implementación de las funcionalidades básicas del
	  sistema.
	AUTOR:
	- Crespi, Malena Nerea
-*-----------------------------------------------------------*/
#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "DIMMER.h"
#include "TPM.h"
#include "ADC.h"
/*-----------------------------------------------------------*-
 * DIMMER_Init()
 * 	- Descripción: Inicializa el sistema, llamando a las ruti-
 * 				   nas de inicialización de los periféricos.
 * 	- Parámetros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void DIMMER_Init(){
	TPM_Init();
	ADC_Init();
}
/*-----------------------------------------------------------*-
 * DIMMER_SetAnchoPulso()
 * 	- Descripción: Carga el resultado de la conversión A/D en
 * 			       el registro de valor del canal 1 del TPM1
 * 				   para que éste genere la señal PWM con el
 * 				   ciclo de trabajo correspondiente.
 * 	- Parámetros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void DIMMER_SetAnchoPulso(){
	TPM1C1V = ADCR;
}
/*-----------------------------------------------------------*-
 * DIMMER_CapturarAnchoPulso()
 * 	- Descripción: Realiza la conversión A/D y genera la señal
 * 				   PWM correspondiente.
 * 	- Parámetros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void DIMMER_CapturarAnchoPulso(){
	ADCSC1_ADCH = 0;
	while(!ADCSC1_COCO);
	DIMMER_SetAnchoPulso();
}
/*-----------------------------------------------------------*-
						FIN DEL ARCHIVO
-*-----------------------------------------------------------*/



