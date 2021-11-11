;----	RETARDO	----
rebotes:	movlw	CUENTAS2		//contador2 = valor inicial
		movwf	contador2
ini_c1:		movlw	CUENTAS1		//contador1 = valor inicial
		movwf	contador1
dec_c1:		decfsz	contador1,f		//decrementa c1 y ¿c1 = 0 ?
		goto	dec_c1
		decfsz	contador2,f		//decrementa c2 y ¿c2 = 0 ?
		goto	ini_c1			
		


