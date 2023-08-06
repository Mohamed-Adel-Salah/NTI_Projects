/*
 * USART_prog.c
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */

#include "Std_types.h"
#include "Macros.h"

#include "DIO_int.h"

#include "USART_int.h"
#include "USART_priv.h"


void USART_voidInitialization(void)
{
	CLR_BIT(UCSRA,U2X);
	CLR_BIT(UCSRA,MPCM);

	UCSRB=0X80;

	SET_BIT(UCSRC,URSEL);
	CLR_BIT(UCSRC,UMSEL);
	SET_BIT(UCSRC,UPM1);
	SET_BIT(UCSRC,UPM0);
	CLR_BIT(UCSRC,USBS);
	SET_BIT(UCSRC,UCSZ1);
	SET_BIT(UCSRC,UCSZ0);
	CLR_BIT(UCSRC,UCPOL);

	UBRRL=51;

	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);

	return;
}

void USART_voidSendData_Polling(u8 Character)
{
	while(!GET_BIT(UCSRA,UDRE));

	UDR=Character;

	CLR_BIT(UCSRA,UDRE);

	return;
}

extern u8 UDR_Global;
void USART_voidRecieveData_Polling(void)
{
	while(!GET_BIT(UCSRA,RXC));

	UDR_Global=UDR;

	CLR_BIT(UCSRA,RXC);

	return;
}


void (*USART_Recieve_ISR)(void)=NULL;
void __vector_13(void)
{
	USART_Recieve_ISR();
}
void USART_RecieveCallBack(void (*PF_USART_Recieve)(void))
{
	USART_Recieve_ISR=PF_USART_Recieve;
}

void (*USART_Send_ISR)(void)=NULL;
void __vector_14(void)
{
	USART_Send_ISR();
}
void USART_SendCallBack(void (*PF_USART_Send)(void))
{
	USART_Send_ISR=PF_USART_Send;
}




