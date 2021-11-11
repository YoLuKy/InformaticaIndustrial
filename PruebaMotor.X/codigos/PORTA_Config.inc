;----	CONFIGURACIÓN DEL PORTE	----
PORTA_Config:
		Cambio_Banco	62			//
		movlw		00000000B		//0 = Digital
		movwf		ANSELA			//Puerto digital
		
		Cambio_Banco	0			//
		movlw		00000000B		//0 = Salida
		movwf		TRISA			//Salida digital
		return


