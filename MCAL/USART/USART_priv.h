/*
 * USART_priv.h
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */

#ifndef MCAL_USART_USART_PRIV_H_
#define MCAL_USART_USART_PRIV_H_

#define UCSRA	*((volatile u8 * )(0X2B))

#define RXC     Pin7
#define TXC     Pin6
#define UDRE    Pin5
#define FE      Pin4
#define DOR     Pin3
#define PE      Pin2
#define U2X     Pin1
#define MPCM    Pin0

#define UCSRB	*((volatile u8 * )(0X2A))

#define RXCIE   Pin7
#define TXCIE   Pin6
#define UDRIE   Pin5
#define RXEN    Pin4
#define TXEN	Pin3
#define UCSZ2   Pin2
#define RXB8    Pin1
#define TXB8    Pin0

#define UCSRC	*((volatile u8 * )(0X40))

#define URSEL   Pin7
#define UMSEL   Pin6
#define UPM1    Pin5
#define UPM0    Pin4
#define USBS	Pin3
#define UCSZ1   Pin2
#define UCSZ0   Pin1
#define UCPOL   Pin0

#define UBRRH   *((volatile u8 * )(0X40))
#define UBRRL   *((volatile u8 * )(0X29))
#define UDR		*((volatile u8 * )(0X2C))


void __vector_13(void);
void USART_RecieveCallBack(void (*PF_USART_Recieve)(void));

void __vector_14(void);
void USART_SendCallBack(void (*PF_USART_Send)(void));


#endif /* MCAL_USART_USART_PRIV_H_ */
