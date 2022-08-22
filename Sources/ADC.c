/*-----------------------------------------------------------*-
						ADC.h (v1.00)
-*-------------------------------------------------------------
	DETALLES:
	– Implementación de inicialización del periférico ADC
	AUTOR:
	- Crespi, Malena Nerea	
-------------------------------------------------------------*/
#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */S
#include "ADC.h"
/*-----------------------------------------------------------*-
 * ADC_Init()
 * 	- Descripción: Inicializa el conversor analógico-digital.
 * 	- Parámetros: Ninguno
 * 	- Retorno: Ninguno
-*-----------------------------------------------------------*/
void ADC_Init(){
	/* ### Init_ADC init code */
	/* APCTL1: ADPC7=0,ADPC6=0,ADPC5=0,ADPC4=0,ADPC3=0,ADPC2=0,ADPC1=0,ADPC0=0 */
	APCTL1 = 0x00U;                                      
	/* ADCCFG: ADLPC=0,ADIV1=1,ADIV0=1,ADLSMP=0,MODE1=0,MODE0=0,ADICLK1=0,ADICLK0=0 */
	ADCCFG = 0x60U;                                      
	/* ADCCV: ADCV9=0,ADCV8=0,ADCV7=0,ADCV6=0,ADCV5=0,ADCV4=0,ADCV3=0,ADCV2=0,ADCV1=0,ADCV0=0 */
	ADCCV = 0x00U;                            
	/* ADCSC2: ADACT=0,ADTRG=0,ACFE=0,ACFGT=0 */
	ADCSC2 = 0x00U;                                      
	/* ADCSC1: COCO=0,AIEN=0,ADCO=0,ADCH4=1,ADCH3=1,ADCH2=1,ADCH1=1,ADCH0=1 */
	ADCSC1 = 0x1FU; 
}
/*-----------------------------------------------------------*-
						FIN DEL ARCHIVO
-*-----------------------------------------------------------*/
