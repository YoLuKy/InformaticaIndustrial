;----	CONFIGURACIÓN DEL PORTE	----
PORTD_Config:
		Cambio_Banco	62			//
		movlw		00000000B		//0 = Digital
		movwf		ANSELD			//Puerto digital
		
		Cambio_Banco	0			//
		movlw		00000000B		//0 = Salida
		movwf		TRISD			//Salida digital
		return


