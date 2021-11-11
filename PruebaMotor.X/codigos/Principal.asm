;===========================================
; Titulo:		Lab 5a
; Programador:	Rub�n Garc�a Cidoncha
; Fecha:		8/10/2021
;-------------------------------------------
; Descripci�n:	Creac�n de c�digos fuente 
;				modulares y manejo de tablas 
;===========================================

#include <xc.inc>

#include "config_pic16f15376.inc"
//#include "definiciones.inc"
#include "macros.inc"
#include "variables.inc"
#include "PORTA_Config.inc"
#include "PORTD_Config.inc"

;===========================================
;psect	-->	Definir secci�n Memoria Programa
;code	-->	C�digo (nombre)
;abs	-->	Absoluto
;avlrd	-->	Overlaid (solapada)
;org	-->	Origen (ofset)
;===========================================

;----	MEMORIA DE PROGRAMA (ROM)	----
v_reset:	psect	code,abs,ovrld
			org		0x00

inicio:		call	PORTD_Config	//Configura PORTD
			call	PORTA_Config	//Configura PORTA

;----	PROGRAMA PRINCIPAL	----
bucle:		mover_adelante
			mover_derecha
			mover_izquierda
;			bcf		LATA,1			//Retrocede derecho
;			bcf		LATD,6			//Retrocede izquierda
			goto	bucle
;----	Subrutinas	----

//#include "retardos_SW.inc"
			
			end		v_reset
