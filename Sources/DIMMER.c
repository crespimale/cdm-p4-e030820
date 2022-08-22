/*-----------------------------------------------------------*-
						DIMMER.c (v1.00)
-*-------------------------------------------------------------
	DETALLES:
	� Implementaci�n de las funcionalidades b�sicas del
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
 * 	- Descripci�n: Inicializa el sistema, llamando a las ruti-
 * 				   nas de inicializaci�n de los perif�ricos.
 * 	- Par�metros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void DIMMER_Init(){
	TPM_Init();
	ADC_Init();
}
/*-----------------------------------------------------------*-
 * DIMMER_SetAnchoPulso()
 * 	- Descripci�n: Carga el resultado de la conversi�n A/D en
 * 			       el registro de valor del canal 1 del TPM1
 * 				   para que �ste genere la se�al PWM con el
 * 				   ciclo de trabajo correspondiente.
 * 	- Par�metros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void DIMMER_SetAnchoPulso(){
	TPM1C1V = ADCR;
}
/*-----------------------------------------------------------*-
 * DIMMER_CapturarAnchoPulso()
 * 	- Descripci�n: Realiza la conversi�n A/D y genera la se�al
 * 				   PWM correspondiente.
 * 	- Par�metros: Ninguno
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



