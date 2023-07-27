/*
 * KEYBAD_prog.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hp
 */


#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"

#include "KEYBAD_int.h"


void KEYBAD_voidInitialization(void)
{
	DIO_voidSetPinDirection(PortC,Pin5,Input);
	DIO_voidSetPinDirection(PortC,Pin4,Input);
	DIO_voidSetPinDirection(PortC,Pin3,Input);
	DIO_voidSetPinDirection(PortC,Pin2,Input);

	DIO_voidSetPinValue(PortC,Pin5,High);
	DIO_voidSetPinValue(PortC,Pin4,High);
	DIO_voidSetPinValue(PortC,Pin3,High);
	DIO_voidSetPinValue(PortC,Pin2,High);




	DIO_voidSetPinDirection(PortD,Pin7,Output);
	DIO_voidSetPinDirection(PortD,Pin6,Output);
	DIO_voidSetPinDirection(PortD,Pin5,Output);
	DIO_voidSetPinDirection(PortD,Pin3,Output);

	DIO_voidSetPinValue(PortD,Pin7,High);
	DIO_voidSetPinValue(PortD,Pin6,High);
	DIO_voidSetPinValue(PortD,Pin5,High);
	DIO_voidSetPinValue(PortD,Pin3,High);

	//return;
}

void KEYBAD_voidGetPressedKey(u8 *Row, u8 *Col,u8 *Flag)
{
	for(u8 i=0;i<5;i++)
	{
		if(i==1)
		{	continue;	}

		DIO_voidSetPortValueMask(PortD,~(1<<(i+3)),0x17);

		for(u8 j=0;j<4;j++)
		{
			if(!DIO_u8GetPinValue(PortC,j+2))
			{
				*Row=3-j;
				*Col=4-i;

				*Flag=1;
			}
		}
	}

	DIO_voidSetPortValueMask(PortD,0xFF,0x17);

	return;
}



