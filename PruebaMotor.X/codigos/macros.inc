; --- Cambio de Banco ---
Cambio_Banco	macro	Num_Banco
		movlb	Num_Banco
		endm

mover_adelante	macro	
		bsf		LATA,0
		bsf		LATD,5
		endm

mover_atras	macro	
		bcf		LATA,0
		bcf		LATD,5
		endm

mover_derecha	macro	
		bsf		LATA,0
		bcf		LATD,5
		endm

mover_izquierda	macro	
		bcf		LATA,0
		bsf		LATD,5
		endm


		


