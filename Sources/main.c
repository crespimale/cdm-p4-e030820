/*-----------------------------------------------------------*-
						main.c (v1.00)
-*-------------------------------------------------------------
#include <mc9s08sh8.h>                 /* I/O map for MC9S08SH8CPJ */
#include <hidef.h> /* for EnableInterrupts macro */
#include "derivative.h" /* include peripheral declarations */
#include "DIMMER.h"

#ifdef __cplusplus
extern "C"
#endif
void MCU_init(void); /* Device initialization function declaration */

void main(void) {
	MCU_init();	/* call Device Initialization */
	DIMMER_Init();
	for(;;) {
		DIMMER_CapturarAnchoPulso();
	} 
}

/*-----------------------------------------------------------*-
						FIN DEL ARCHIVO
-*-----------------------------------------------------------*/
