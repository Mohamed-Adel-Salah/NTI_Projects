/*
 * APP.c
 *
 *  Created on: Jul 22, 2023
 *      Author: hp
 */

//#define F_CPU 8000000UL


#include "STD_Types.h"
#include "Macros.h"

//#include <math.h>

#include "DIO_int.h"
#include "DIO_reg.h"
//#include "7SEG_int.h"
//#include "SEG_KIT_int.h"
#include "LCD_KIT_int.h"
//#include "KEYBAD_int.h"
//#include "KEYPAD_priv.h"
#include "GIE_int.h"
//#include "EXT_INT_int.h"
//#include "EXT_INT_priv.h"
//#include "ADC_int.h"
//#include "ADC_priv.h"
#include "USART_int.h"
#include "USART_priv.h"
//#include "SPI_int.h"
//#include "SPI_priv.h"
//#include "I2C_int.h"
//#include "I2C_priv.h"
//#include "Timer0_int.h"
//#include "Timer0_priv.h"
//#include "Timer0_confg.h"
//#include "Timer1_int.h"
//#include "Timer1_priv.h"
//#include "Timer1_confg.h"

//#include "FreeRTOS.h"
//#include "task.h"

#include <util/delay.h>

//#include "../MCAL/Timer0/Timer0_int.h"
//#include "../MCAL/Timer0/Timer0_priv.h"

/****************************7SEG Application**********************************/
/*
int main(void)
{
	SEG_voidInitialization();

	while(1)
	{
		for(u8 i=0;i<10;i++)
		{
			SEG_voidDisplayNumber(i);
			_delay_ms(500);
		}
	}

	return 0;
}
*/

/****************************SEG_KIT Application*******************************/
/*
int main(void)
{
	SEG_KIT_voidInitialization();


//	while(1)
//	{
//		SEG_KIT_voidDisplayNumber(2,SEG1);
//		_delay_ms(500);
//		SEG_KIT_voidDisplayNumber(1,SEG3);
//		_delay_ms(500);
//	}



//	while(1)
//	{
//		for(u8 i=0;i<10;i++)
//		{
//			for(u8 j=1;j<5;j++)
//			{
//				SEG_KIT_voidDisplayNumber(i,j);
//				_delay_ms(5);
//			}
//			//_delay_ms(200);
//		}
//	}



//	while(1)
//	{
//		SEG_KIT_voidDisplayNumber(5,SEG1);
//		_delay_ms(5);
//		SEG_KIT_voidDisplayNumber(6,SEG2);
//		_delay_ms(5);
//		SEG_KIT_voidDisplayNumber(7,SEG3);
//		_delay_ms(5);
//		SEG_KIT_voidDisplayNumber(8,SEG4);
//		_delay_ms(5);
//	}




//	while(1)
//	{
//
//		for(u16 i=0;i<10000;i+=7)
//		{
//			for(u8 j=0;j<250;j++)
//			{
//				SEG_KIT_voidDisplayBigNumber(i);
//			}
//			//_delay_ms(1000);
//		}
//
//	}

	return 0;
}
*/

/****************************LCD Application***********************************/

//
//int main(void)
//{
//	LCD_KIT_voidInitialization();
//
///***** Story of Bary *****/
////
////	u8 Delay_Counter=0;
////
////	u8 Leg_10=1,Leg_9=1,Leg_8=1;
////
//////setting custom character array
////	u8 Person_State[6][8]=
////	{
////		{0x04,0x0A,0x04,0x1F,0x04,0x04,0x0A,0x0A},
////		{0x04,0x0A,0x05,0x0E,0x14,0x04,0x0A,0x11},
////		{0x04,0x0A,0x14,0x0E,0x05,0x04,0x0A,0x11},
////		{0x08,0x14,0x09,0x0A,0x04,0x0B,0x12,0x00},
////		{0x02,0x05,0x12,0x0A,0x04,0x1A,0x09,0x00},
////		{0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}
////	};
////
////// Store characters
////	LCD_KIT_voidStoreCustomCharacter(Person_State[0],0x40);
////	LCD_KIT_voidStoreCustomCharacter(Person_State[1],0x48);
////	LCD_KIT_voidStoreCustomCharacter(Person_State[2],0x50);
////	LCD_KIT_voidStoreCustomCharacter(Person_State[3],0x58);
////	LCD_KIT_voidStoreCustomCharacter(Person_State[4],0x60);
////	LCD_KIT_voidStoreCustomCharacter(Person_State[5],0x68);
////
////// Ready-Steady-Go stage
////	LCD_KIT_voidSetCurser(Line1,Col7);
////	LCD_KIT_voidDisplayString("Ready");
////	_delay_ms(500);
////	LCD_KIT_voidRunCommand(Clear_LCD);
////
////	LCD_KIT_voidSetCurser(Line1,Col7);
////	LCD_KIT_voidDisplayString("Steady");
////	_delay_ms(500);
////	LCD_KIT_voidRunCommand(Clear_LCD);
////
////	LCD_KIT_voidSetCurser(Line1,Col9);
////	LCD_KIT_voidDisplayString("GO");
////	_delay_ms(500);
////	LCD_KIT_voidRunCommand(Clear_LCD);
////
////// Setting players positions
////	LCD_KIT_voidSetCurser(Line3,Col0);
////	LCD_KIT_voidDisplayCharacter(0x00);
////
////	LCD_KIT_voidSetCurser(Line2,Col0);
////	LCD_KIT_voidDisplayCharacter(0x00);
////
////	LCD_KIT_voidSetCurser(Line4,Col0);
////	LCD_KIT_voidDisplayCharacter(0x00);
////
////// Setting Barriers Positions
////	LCD_KIT_voidSetCurser(Line2,Col2);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////	LCD_KIT_voidSetCurser(Line2,Col18);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////
////	LCD_KIT_voidSetCurser(Line3,Col10);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////	LCD_KIT_voidSetCurser(Line3,Col16);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////
////	LCD_KIT_voidSetCurser(Line4,Col13);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////	LCD_KIT_voidSetCurser(Line4,Col17);
////	LCD_KIT_voidDisplayCharacter(0xFF);
////
////// Setting End line Positions
////	LCD_KIT_voidSetCurser(Line2,Col19);
////	LCD_KIT_voidDisplayCharacter(0x05);
////	LCD_KIT_voidSetCurser(Line3,Col19);
////	LCD_KIT_voidDisplayCharacter(0x05);
////	LCD_KIT_voidSetCurser(Line4,Col19);
////	LCD_KIT_voidDisplayCharacter(0x05);
////
////// Start Game
////	LCD_KIT_voidSetCurser(Line1,Col4);
////	LCD_KIT_voidDisplayString("Run Bary Run");
////
////	while(1)
////	{
////		if(Delay_Counter<153)
////		{
////			_delay_ms(10);
////			Delay_Counter++;
////
////			if(Delay_Counter%10==0)
////			{
////				if((Delay_Counter/10==2)||(Delay_Counter/10==3)||(Delay_Counter/10==18)||(Delay_Counter/10==19))
////				{
////					if(Leg_10==1)
////					{
////						LCD_KIT_voidSetCurser(Line1,Delay_Counter/10);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
////						LCD_KIT_voidDisplayCharacter(0x03);
////						Leg_10=2;
////					}
////					else if(Leg_10==2)
////					{
////						LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line1,Delay_Counter/10);
////						LCD_KIT_voidDisplayCharacter(0x04);
////						Leg_10=1;
////					}
////				}
////				else
////				{
////					LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
////					LCD_KIT_voidRunCommand(0x10);
////					LCD_KIT_voidDisplayCharacter(' ');
////					LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
////
////					if(Leg_10==1)
////					{
////						LCD_KIT_voidDisplayCharacter(0x01);
////						Leg_10=2;
////					}
////					else if(Leg_10==2)
////					{
////						LCD_KIT_voidDisplayCharacter(0x02);
////						Leg_10=1;
////					}
////				}
////			}
////
////			if(Delay_Counter%9==0)
////			{
////				if((Delay_Counter/9==13)||(Delay_Counter/9==14)||(Delay_Counter/9==17)||(Delay_Counter/9==18))
////				{
////					if(Leg_9==1)
////					{
////						LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line3,Delay_Counter/9);
////						LCD_KIT_voidDisplayCharacter(0x01);
////						Leg_9=2;
////					}
////					else if(Leg_9==2)
////					{
////						LCD_KIT_voidSetCurser(Line3,Delay_Counter/9);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
////						LCD_KIT_voidDisplayCharacter(0x02);
////						Leg_9=1;
////					}
////				}
////				else
////				{
////					LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
////					LCD_KIT_voidRunCommand(0x10);
////					LCD_KIT_voidDisplayCharacter(' ');
////					LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
////
////					if(Leg_9==1)
////					{
////						LCD_KIT_voidDisplayCharacter(0x01);
////						Leg_9=2;
////					}
////					else if(Leg_9==2)
////					{
////						LCD_KIT_voidDisplayCharacter(0x02);
////						Leg_9=1;
////					}
////				}
////			}
////
////			if(Delay_Counter%8==0)
////			{
////				if((Delay_Counter/8==10)||(Delay_Counter/8==11)||(Delay_Counter/8==16)||(Delay_Counter/8==17))
////				{
////					if(Leg_8==1)
////					{
////						LCD_KIT_voidSetCurser(Line2,Delay_Counter/8);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
////						LCD_KIT_voidDisplayCharacter(0x01);
////						Leg_8=2;
////					}
////					else if(Leg_8==2)
////					{
////						LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
////						LCD_KIT_voidRunCommand(0x10);
////						LCD_KIT_voidDisplayCharacter(' ');
////						LCD_KIT_voidSetCurser(Line2,Delay_Counter/8);
////						LCD_KIT_voidDisplayCharacter(0x02);
////						Leg_8=1;
////					}
////				}
////				else
////				{
////					LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
////					LCD_KIT_voidRunCommand(0x10);
////					LCD_KIT_voidDisplayCharacter(' ');
////					LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
////
////					if(Leg_8==1)
////					{
////						LCD_KIT_voidDisplayCharacter(0x01);
////						Leg_8=2;
////					}
////					else if(Leg_8==2)
////					{
////						LCD_KIT_voidDisplayCharacter(0x02);
////						Leg_8=1;
////					}
////				}
////			}
////		}
////		else
////		{
////			LCD_KIT_voidSetCurser(Line2,Col19);
////			LCD_KIT_voidDisplayCharacter(' ');
////			LCD_KIT_voidSetCurser(Line4,Col19);
////			LCD_KIT_voidDisplayCharacter(' ');
////			_delay_ms(100);
////			break;
////		}
////	}
////
////	LCD_KIT_voidRunCommand(0x01);
////	LCD_KIT_voidDisplayString(" The winner is Bary");
////	LCD_KIT_voidSetCurser(Line2,Col0);
////	LCD_KIT_voidDisplayString("Bary has just broken");
////	LCD_KIT_voidSetCurser(Line3,Col0);
////	LCD_KIT_voidDisplayString("  the WORLD RECORD");
////
//////setting custom character array
////	u8 Arabic_Word[6][8]=
////	{
////		{0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00},
////		{0x01,0x01,0x01,0x01,0x01,0x01,0x1F,0x00},
////		{0x00,0x00,0x0E,0x01,0x01,0x01,0x1E,0x00},
////		{0x00,0x00,0x06,0x09,0x09,0x09,0x16,0x00},
////		{0x00,0x00,0x01,0x01,0x01,0x01,0x0F,0x00},
////		{0x00,0x06,0x09,0x09,0x07,0x01,0x01,0x00}
////	};
////
////// Store characters
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[0],0x40);
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[1],0x48);
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[2],0x50);
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[3],0x58);
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[4],0x60);
////	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[5],0x68);
////
////// Setting Cursor to shift left to print Arabic word
////	LCD_KIT_voidRunCommand(0x04);
////
////// Return cursor to DDRAM
////	LCD_KIT_voidSetCurser(Line4, Col13);
////
////// Printing Arabic word
////	LCD_KIT_voidDisplayCharacter(0);
////	LCD_KIT_voidDisplayCharacter(1);
////	LCD_KIT_voidDisplayCharacter(2);
////	LCD_KIT_voidDisplayCharacter(3);
////	LCD_KIT_voidDisplayCharacter(4);
////
////	LCD_KIT_voidDisplayCharacter(1);
////	LCD_KIT_voidDisplayCharacter(1);
////	LCD_KIT_voidDisplayCharacter(5);
//
//
///***** Game *****/
////
////	u8 Way_Flag, Previous_Way_flag, Col_Index=2, Line_Index=1;
////
////		u8 Ball[8]={0x00,0x00,0x0E,0x1F,0x1F,0x1F,0x0E,0x00};
////		LCD_KIT_voidStoreCustomCharacter(Ball,0x40);
////
////		LCD_KIT_voidSetCurser(Line1,Col0);
////		LCD_KIT_voidDisplayCharacter(0x00);
////
////		while(1)
////		{
////			if(!DIO_u8GetPinValue(Switch_Port,Go_To_Right))
////			{
////				LCD_KIT_voidRunCommand(0x06);
////				LCD_KIT_voidRunCommand(0x10);
////				LCD_KIT_voidDisplayCharacter(' ');
////				LCD_KIT_voidDisplayCharacter(0x00);
////				Way_Flag=Right;
////				Previous_Way_flag=Right;
////				break;
////			}
////		}
////
////		while(1)
////		{
////			if((Col_Index == 0)||(Col_Index == 21))
////			{
////				LCD_KIT_voidRunCommand(0x06);
////				LCD_KIT_voidSetCurser(Line1,Col5);
////				LCD_KIT_voidDisplayString("Game Over");
////				break;
////			}
////
////			_delay_ms(200);
////
////			if(!DIO_u8GetPinValue(Switch_Port,Go_To_Right))
////			{
////				LCD_KIT_voidRunCommand(0x06);
////				Way_Flag=Right;
////				_delay_ms(200);
////			}
////			else if(!DIO_u8GetPinValue(Switch_Port,Go_To_Left))
////			{
////				LCD_KIT_voidRunCommand(0x04);
////				Way_Flag=Left;
////				_delay_ms(200);
////			}
////			else if(!DIO_u8GetPinValue(PortD,Go_To_Up))
////			{
////				if(Way_Flag==Right)
////				{
////					LCD_KIT_voidRunCommand(Left);
////					LCD_KIT_voidDisplayCharacter(' ');
////				}
////				else if(Way_Flag==Left)
////				{
////					LCD_KIT_voidRunCommand(Right);
////					LCD_KIT_voidDisplayCharacter(' ');
////				}
////
////				if(Line_Index==1)
////				{
////					LCD_KIT_voidRunCommand(0x06);
////					LCD_KIT_voidSetCurser(Line1,Col5);
////					LCD_KIT_voidDisplayString("Game Over");
////					break;
////				}
////
////				switch(Line_Index)
////				{
////				case 2:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line1,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line1,Col_Index); break;
////					}
////
////				case 3:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line2,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line2,Col_Index); break;
////					}
////
////				case 4:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line3,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line3,Col_Index); break;
////					}
////				}
////				Line_Index--;
////				_delay_ms(200);
////			}
////			else if (!DIO_u8GetPinValue(PortD,Go_To_Down))
////			{
////				if(Way_Flag==Right)
////				{
////					LCD_KIT_voidRunCommand(Left);
////					LCD_KIT_voidDisplayCharacter(' ');
////				}
////				else if(Way_Flag==Left)
////				{
////					LCD_KIT_voidRunCommand(Right);
////					LCD_KIT_voidDisplayCharacter(' ');
////				}
////
////				if(Line_Index==4)
////				{
////					LCD_KIT_voidRunCommand(0x06);
////					LCD_KIT_voidSetCurser(Line1,Col5);
////					LCD_KIT_voidDisplayString("Game Over");
////					break;
////				}
////
////				switch(Line_Index)
////				{
////				case 1:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line2,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line2,Col_Index); break;
////					}
////
////				case 2:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line3,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line3,Col_Index); break;
////					}
////
////				case 3:
////					if(Way_Flag==Left)
////					{
////						LCD_KIT_voidSetCurser(Line4,Col_Index-2); break;
////					}
////					else
////					{
////						LCD_KIT_voidSetCurser(Line4,Col_Index); break;
////					}
////				}
////				Line_Index++;
////				_delay_ms(200);
////			}
////
////			if((Way_Flag==Left)&&(Previous_Way_flag==Left))
////			{
////				Col_Index--;
////				LCD_KIT_voidRunCommand(Right);
////				LCD_KIT_voidDisplayCharacter(' ');
////
////				if(Col_Index > 0)
////				{
////					LCD_KIT_voidDisplayCharacter(0x00);
////				}
////			}
////			else if((Way_Flag==Left)&&(Previous_Way_flag==Right))
////			{
////				LCD_KIT_voidRunCommand(Left);
////				LCD_KIT_voidDisplayCharacter(' ');
////				LCD_KIT_voidDisplayCharacter(0x00);
////				Previous_Way_flag=Left;
////				Col_Index--;
////			}
////			else if((Way_Flag==Right)&&(Previous_Way_flag==Right))
////			{
////				Col_Index++;
////				LCD_KIT_voidRunCommand(Left);
////				LCD_KIT_voidDisplayCharacter(' ');
////
////				if(Col_Index<21)
////				{
////					LCD_KIT_voidDisplayCharacter(0x00);
////				}
////			}
////			else if((Way_Flag==Right)&&(Previous_Way_flag==Left))
////			{
////				LCD_KIT_voidRunCommand(Right);
////				LCD_KIT_voidDisplayCharacter(' ');
////				LCD_KIT_voidDisplayCharacter(0x00);
////				Previous_Way_flag=Right;
////				Col_Index++;
////			}
////
////	}
//
//	return 0;
//}

/*************************KEYPAD Application***********************************/

//u16 Power(u8 x , u8 y)
//{
//	u8 res=1;
//
//	if(y==0)
//	{
//		return res;
//	}
//
//	while(y!=0)
//	{
//		res*=x;
//		y--;
//	}
//
//	return res;
//}


//int main(void)
//{
//	LCD_KIT_voidInitialization();
//	KEYBAD_voidInitialization();
//
//	u8 Keypad[4][5]=
//	{
//			{'7','8','9',' ','/'},
//			{'4','5','6',' ','*'},
//			{'1','2','3',' ','-'},
//			{'#','0','=',' ','+'}
//	};
//
///*****APP1*****Simple Calculator*****/
///*
//	u8 Row=3,Col=3,Flag=0;
//	u16 Operand1=0,Operand2=0,Operator=0,OPflag=1,Delflag=0,Eqflag=0;
//
//	while(1)
//	{
//		KEYBAD_voidGetPressedKey(&Row , &Col , &Flag);
//
//		if(Flag==1)
//		{
//			if((Keypad[Row][Col])!='#')
//			{
//				if(Eqflag==0)
//				{
//					LCD_KIT_voidDisplayCharacter(Keypad[Row][Col]);
//				}
////				else if(Eqflag==1)
////				{
////					LCD_KIT_voidDisplayCharacter('%');
////					LCD_KIT_voidRunCommand(0x01);
////					LCD_KIT_voidDisplayCharacter(Keypad[Row][Col]);
////					Eqflag=0;
////				}
//			}
//			_delay_ms(100);
//			Flag=0;
//
//			if(OPflag==0)
//				OPflag=1;
//			else if(OPflag==3)
//				OPflag=2;
//
//			Delflag=1;
//		}
//
//		if(((Keypad[Row][Col]>=48)&&(Keypad[Row][Col]<=57))&&(OPflag==1))
//		{
//			Operand1*=10;
//			Operand1+=(Keypad[Row][Col]-48);
//			OPflag=0;
//		}
//		else if((((Keypad[Row][Col]>=48))&&(Keypad[Row][Col]<=57))&&(OPflag==2))
//		{
//			Operand2*=10;
//			Operand2+=(Keypad[Row][Col]-48);
//			OPflag=3;
//		}
//		else if(((Keypad[Row][Col])=='+')||((Keypad[Row][Col])=='-')||((Keypad[Row][Col])=='*')||((Keypad[Row][Col])=='/'))
//		{
//			if(OPflag==1)
//				OPflag=2;
//			else if(OPflag==2)
//				OPflag==1;
//
//			switch(Keypad[Row][Col])
//			{
//			case '+' : Operator=1;break;
//			case '-' : Operator=2;break;
//			case '*' : Operator=3;break;
//			case '/' : Operator=4;break;
//			}
//		}
//		else if(((Keypad[Row][Col])=='#')&&(Delflag==1))
//		{
//			LCD_KIT_voidRunCommand(0x10);
//			LCD_KIT_voidDisplayCharacter(' ');
//			LCD_KIT_voidRunCommand(0x10);
//			Delflag=0;
//
//			if(OPflag==1)
//				Operand1/=10;
//			else if(OPflag==2)
//				Operand2/=10;
//		}
//		else if(Keypad[Row][Col]=='=')
//		{
//			switch(Operator)
//			{
//			case 1 : LCD_KIT_voidDisplayBigNumber(Operand1+Operand2);Operand1=0;Operand2=0;Operator=0;OPflag=1;Eqflag=1;break;
//			case 2 : LCD_KIT_voidDisplayBigNumber(Operand1-Operand2);Operand1=0;Operand2=0;Operator=0;OPflag=1;Eqflag=1;break;
//			case 3 : LCD_KIT_voidDisplayBigNumber(Operand1*Operand2);Operand1=0;Operand2=0;Operator=0;OPflag=1;Eqflag=1;break;
//			case 4 : LCD_KIT_voidDisplayBigNumber(Operand1/Operand2);Operand1=0;Operand2=0;Operator=0;OPflag=1;Eqflag=1;break;
//			}
//		}
//	}
//*/
//
///*****APP1*****Complex Calculator*****/
//
//	u8 Row=3,Col=3,Flag=0,Equal_flag=0;
//
//	u8 Operator_Counter=1;
//
//	u8 Operator_Position[20];
//	Operator_Position[0]=0;
//	u16 Operand_Value[19]={0};
//
//	u8  Operation_arr[39];
//	Operation_arr[0]='S';
//	u8 Operation_arr_Counter=1;
//
//	u16 res;
//
//	while(1)
//	{
//		KEYBAD_voidGetPressedKey(&Row , &Col , &Flag);
//
//		if(Flag==1)
//		{
//			LCD_KIT_voidDisplayCharacter(Keypad[Row][Col]);
//
//			Operation_arr[Operation_arr_Counter]=Keypad[Row][Col];
//
//			if((Keypad[Row][Col]=='+')||(Keypad[Row][Col]=='-')||(Keypad[Row][Col]=='*')||(Keypad[Row][Col]=='/')||(Keypad[Row][Col]=='='))
//			{
//				Operator_Position[Operator_Counter]=Operation_arr_Counter;
//				Operator_Counter++;
//			}
//
//			Operation_arr_Counter++;
//
//			_delay_ms(200);
//			Flag=0;
//			break;
//		}
//	}
//
//	while(1)
//	{
//		KEYBAD_voidGetPressedKey(&Row , &Col , &Flag);
//
//		if((Flag==1)&&(Equal_flag==0))
//		{
//			if(Keypad[Row][Col]=='#')
//			{
//				if((Operation_arr[Operation_arr_Counter-1]=='+')||(Operation_arr[Operation_arr_Counter-1]=='-')||(Operation_arr[Operation_arr_Counter-1]=='*')||(Operation_arr[Operation_arr_Counter-1]=='/'))
//				{
//					Operator_Counter--;
//				}
//
//				LCD_KIT_voidRunCommand(0x10);
//				LCD_KIT_voidDisplayCharacter(' ');
//				LCD_KIT_voidRunCommand(0x10);
//
//				Operation_arr_Counter--;
//
//				_delay_ms(200);
//				Flag=0;
//
//				continue;
//			}
//
//			LCD_KIT_voidDisplayCharacter(Keypad[Row][Col]);
//
//			Operation_arr[Operation_arr_Counter]=Keypad[Row][Col];
//
//			if((Keypad[Row][Col]=='+')||(Keypad[Row][Col]=='-')||(Keypad[Row][Col]=='*')||(Keypad[Row][Col]=='/')||(Keypad[Row][Col]=='='))
//			{
//				Operator_Position[Operator_Counter]=Operation_arr_Counter;
//				Operator_Counter++;
//			}
//
//			Operation_arr_Counter++;
//
//			_delay_ms(100);
//			Flag=0;
//		}
//		else if((Flag==1)&&(Equal_flag==1))
//		{
//			LCD_KIT_voidRunCommand(Clear_LCD);
//
//			Equal_flag=0;
//
//			for(u8 i=0;i<19;i++)
//			{
//				Operand_Value[i]=0;
//			}
//			Operator_Counter=1;
//
//			Operation_arr_Counter=1;
//
//			if(Keypad[Row][Col]!='#')
//			{
//				LCD_KIT_voidDisplayCharacter(Keypad[Row][Col]);
//				Operation_arr[Operation_arr_Counter]=Keypad[Row][Col];
//
//				if((Keypad[Row][Col]=='+')||(Keypad[Row][Col]=='-')||(Keypad[Row][Col]=='*')||(Keypad[Row][Col]=='/')||(Keypad[Row][Col]=='='))
//				{
//					Operator_Position[Operator_Counter]=Operation_arr_Counter;
//					Operator_Counter++;
//				}
//
//				Operation_arr_Counter++;
//			}
//
//			_delay_ms(100);
//			Flag=0;
//
//
//		}
//
//		if((Keypad[Row][Col]=='=')&&(Equal_flag==0))
//		{
//			/***************Get Operand Values***********************/
//			for(u8 i=0;i<Operator_Counter-1;i++)
//			{
//				for(u8 j=Operator_Position[i]+1;j<Operator_Position[i+1];j++)
//				{
//					Operand_Value[i]+=(Operation_arr[j]-48)*Power(10,Operator_Position[i+1]-j-1);
//				}
//			}
//
//			for(u8 i=1;i<Operator_Counter-1;i++)
//			{
//				if(Operation_arr[Operator_Position[i]]=='*')
//				{
//					Operand_Value[i-1] *= Operand_Value[i];
//
//					for(u8 j=i;j<Operator_Counter-2;j++)
//					{
//						Operand_Value[j]=Operand_Value[j+1];
//						Operator_Position[j]=Operator_Position[j+1];
//					}
//
//					i--;
//
//					Operator_Counter--;
//				}
//				else if(Operation_arr[Operator_Position[i]]=='/')
//				{
//					Operand_Value[i-1] /= Operand_Value[i];
//
//					for(u8 j=i;j<Operator_Counter-2;j++)
//					{
//						Operand_Value[j]=Operand_Value[j+1];
//						Operator_Position[j]=Operator_Position[j+1];
//					}
//
//					i--;
//
//					Operator_Counter--;
//				}
//				else
//				{
//
//				}
//			}
//
//			for(u8 i=0;i<Operator_Counter-1;i++)
//			{
//				if(Operation_arr[Operator_Position[i]]=='S')
//				{
//					res=Operand_Value[i];
//				}
//				else if(Operation_arr[Operator_Position[i]]=='+')
//				{
//					res+=Operand_Value[i];
//				}
//				else if(Operation_arr[Operator_Position[i]]=='-')
//				{
//					res-=Operand_Value[i];
//				}
//			}
//
//			LCD_KIT_voidDisplayBigNumber(res);
//
//			Equal_flag=1;
//		}
//	}
//
//	return 0;
//}

/************************* Interrupts *****************************************/

/*
void Toggle(void)
{
	DIO_voidTogglePin(PortB,Pin7);

	_delay_ms(200);
}

int main(void)
{
	DIO_voidInitialization();

	EXT_INT_voidInitialization();

	EXTI1_CallBack(Toggle);
	//EXTI1_CallBack(DIO_voidTogglePin(PortB,Pin7));

	GIE_Enable();
	EXTI1_Enable();

	while(1)
	{

	}


	return 0;
}
*/

/**************************** ADC *********************************************/

//
//void ADC_voidReadConversionValue(void)
//{
////	u16 Value=ADCL;
////
////	if(GET_BIT(ADCH,Pin0))
////	{
////		Value+=256;
////	}
////	if(GET_BIT(ADCH,Pin1))
////	{
////		Value+=512;
////	}
//
//	LCD_KIT_voidRunCommand(0x01);
//	LCD_KIT_voidDisplayBigNumber((u16)(ADCL|(ADCH<<8)));
//
//	SET_BIT(ADCSRA,ADIF);
//
//	return ;
//}
//
//int main(void)
//{
//	DIO_voidInitialization();
//
//	ADC_voidInitialization();
//	LCD_KIT_voidInitialization();
//
//	ADC_CallBack(ADC_voidReadConversionValue);
//
//	GIE_Enable();
//	//ADC_voidInterruptEnable();
//
//
//
//	while(1)
//	{
//		ADC_voidStartConversion(0);
//
//		ADC_voidReadConversionValue_Polling();
//		LCD_KIT_voidDisplayString("Finally");
//		//_delay_ms(500);
//	}
//
//	return 0;
//}
//

/*************************** USART ********************************************/

//u8 UDR_Global;
//
//u8 temp;
//
//void USART_voidSendData_Intrrupt(u8 Character)
//{
//	UDR=Character;
//
//	CLR_BIT(UCSRA,UDRE);
//
//	return;
//}
//
//void USART_voidRecieveData_Interrupt(void)
//{
//	LCD_KIT_voidDisplayCharacter('A');
//
//	UDR_Global=UDR;
//	//temp=UDR;
//
//	LCD_KIT_voidDisplayCharacter(UDR_Global);
//	//LCD_KIT_voidDisplayCharacter(temp);
//	//SET_BIT(UCSRA,RXC);
//
////	GIE_Disable();
////	GIE_Enable();
//
////	CLR_BIT(UCSRB,RXEN);
////	SET_BIT(UCSRB,RXEN);
//
//
//}
//
//int main(void)
//{
//	USART_RecieveCallBack(USART_voidRecieveData_Interrupt);
//		//USART_SendCallBack(USART_voidSendData_Intrrupt);
//
//	DIO_voidInitialization();
//
//	LCD_KIT_voidInitialization();
//
//	USART_voidInitialization();
//
//	GIE_Enable();
//
////	_delay_ms(200);
////	USART_voidSendData_Polling(65);
////	_delay_ms(200);
////	USART_voidSendData_Polling('h');
////	_delay_ms(200);
////	USART_voidSendData_Polling('m');
////	_delay_ms(200);
////	USART_voidSendData_Polling('e');
////	_delay_ms(200);
////	USART_voidSendData_Polling('d');
////	_delay_ms(200);
//
////	USART_voidRecieveData_Polling();
////	LCD_KIT_voidDisplayCharacter(UDR_Global);
////
////	USART_voidRecieveData_Polling();
////	LCD_KIT_voidDisplayCharacter(UDR_Global);
////
////	USART_voidRecieveData_Polling();
////	LCD_KIT_voidDisplayCharacter(UDR_Global);
//
//	while(1)
//	{
////		LCD_KIT_voidDisplayCharacter('g');
////		_delay_ms(50);
//
//		//		USART_voidRecieveData_Polling();
////		LCD_KIT_voidDisplayCharacter(UDR_Global);
////		_delay_ms(1000);
//
//	}
//
//
//	return 0;
//}


/*************************** Timers *******************************************/
/*
volatile u16 Counter=0;
void Timer0_OVF_Interrupt(void)
{
	Counter++;
	//TCNT0=6;

	if(Counter==4000)
	{
		DIO_voidTogglePin(PortB,Pin5);
		Counter=0;
	}
}

volatile u8 Counter_Seconds=0;
volatile u8 Counter_Minuts=0;
volatile u8 Counter_Hours=0;
void Timer0_CTC_Interrupt(void)
{
	Counter++;

	if(Counter==4000)
	{
		DIO_voidTogglePin(PortB,Pin5);
		Counter_Seconds++;
		Counter=0;
	}
}

u16 OVF_Counter=0;
void Timer1_OVF_interrupt(void)
{
	OVF_Counter++;
//	LCD_KIT_voidDisplayCharacter('*');
//	LCD_KIT_voidDisplayCharacter(OVF_Counter+48);

	SET_BIT(TIFR,TOV1);
}

volatile u8 flag=0;
volatile u32 T_0=0;
volatile u32 T_1;
volatile u32 T_2;
volatile u32 T_3;
void Timer1_ICR_interrupt(void)
{
	if(flag==0)
	{
		T_0=ICR1+OVF_Counter*65536;
//		TCNT1=0;
//		OVF_Counter=0;
		//Timer1_voidCaptureEdgeSelect(Falling_Edge);
		SET_BIT(TCCR1B,TCCR1B_ICES1);
		flag++;
	}
	else if(flag==1)
	{
		T_1=ICR1+OVF_Counter*65536;
//		TCNT1=0;
//		OVF_Counter=0;
		//Timer1_voidCaptureEdgeSelect(Rising_Edge);
		CLR_BIT(TCCR1B,TCCR1B_ICES1);
		flag++;
	}
	else if(flag==2)
	{
		T_2=ICR1+OVF_Counter*65536;
//		TCNT1=0;
//		OVF_Counter=0;
		//Timer1_voidCaptureEdgeSelect(Falling_Edge);
		SET_BIT(TCCR1B,TCCR1B_ICES1);
		flag++;
	}
	else if(flag==3)
		{
			T_3=ICR1+OVF_Counter*65536;
			flag++;

			Timer1_voidICRInterruptDisable();
			Timer1_voidOVFInterruptDisable();
		}
}
*/

//
//int main(void)
//{
///************Timer0**************/
////	Timer0_voidInitialization();
////	LCD_KIT_voidInitialization();
////	DIO_voidInitialization();
////
////	//Timer0OVF_CallBack(Timer0_OVF_Interrupt);
////	Timer0CTC_CallBack(Timer0_CTC_Interrupt);
////
////	LCD_KIT_voidDisplayString("00:00:00");
////
////	//GIE_Enable();
////
////	while(1)
////	{
////		Counter_Seconds++;
//////			LCD_KIT_voidRunCommand(Clear_LCD);
//////			LCD_KIT_voidSetCurser(Line1,Col0);
//////			//LCD_KIT_voidDisplayBigNumber(Counter_Seconds);
//////			LCD_KIT_voidDisplayCharacter(Counter_Seconds+48);
//////			_delay_ms(100);
////
////		if(Counter_Seconds<9)
////		{
////			LCD_KIT_voidSetCurser(Line1,Col7);
////			LCD_KIT_voidDisplayCharacter(Counter_Seconds+48);
////			//_delay_ms(1000);
////		}
////		else if(Counter_Seconds<60)
////		{
////			LCD_KIT_voidSetCurser(Line1,Col6);
////			LCD_KIT_voidDisplayBigNumber(Counter_Seconds);
////			//_delay_ms(1000);
////
////		}
////		else if(Counter_Seconds==60)
////		{
////			LCD_KIT_voidSetCurser(Line1,Col6);
////			LCD_KIT_voidDisplayCharacter('0');
////			LCD_KIT_voidDisplayCharacter('0');
////			Counter_Minuts++;
////		}
////
////		//LCD_KIT_voidDisplayCharacter(Counter_Seconds+48);
////
////	}
//
///******Timer1 Servo Motor*****/
////	DIO_voidInitialization();
////	Timer1_voidInitialization();
////
////	Timer1_voidSetFrequency(50);
////
////
////	while(1)
////	{
////		Timer1_voidSetDutyCycle(50);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(60);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(70);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(75);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(80);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(90);
////		_delay_ms(500);
////
////		Timer1_voidSetDutyCycle(100);
////		_delay_ms(500);
////	}
//
///***** ICU *****/
////
////	Timer1ICR_CallBack(Timer1_ICR_interrupt);
////	Timer1OVF_CallBack(Timer1_OVF_interrupt);
////
////	DIO_voidInitialization();
////	Timer0_voidInitialization();
////	Timer1_voidInitialization();
////
////	LCD_KIT_voidInitialization();
////
////	//_delay_ms(501);
////	//_delay_ms(534);
////
////	//Timer1_voidCaptureEdgeSelect(Rising_Edge);
////	CLR_BIT(TCCR1B,TCCR1B_ICES1);
////
////	GIE_Enable();
////	Timer1_voidOVFInterruptEnable();
////	Timer1_voidICRInterruptEnable();
////
////
////	while(1)
////	{
//////		LCD_KIT_voidSetCurser(Line1,Col0);
//////		LCD_KIT_voidDisplayBigNumber(T_0);
//////		LCD_KIT_voidSetCurser(Line2,Col0);
//////		LCD_KIT_voidDisplayBigNumber(T_1-T_0);
//////		LCD_KIT_voidSetCurser(Line3,Col0);
//////		LCD_KIT_voidDisplayBigNumber(T_2-T_0);
//////		LCD_KIT_voidSetCurser(Line4,Col0);
//////		LCD_KIT_voidDisplayBigNumber(T_3-T_0);
////
////		if(flag==3)
////		{
////			LCD_KIT_voidSetCurser(Line1,Col0);
////			LCD_KIT_voidDisplayString("Period is ");
////			LCD_KIT_voidDisplayBigNumber((T_2-T_0)/8);
////			LCD_KIT_voidDisplayString(" Ms");
////
////			LCD_KIT_voidSetCurser(Line2,Col0);
////			LCD_KIT_voidDisplayString("Duty Cycle is ");
////			LCD_KIT_voidDisplayBigNumber((((float)(T_2-T_1))/(T_2-T_0))*100);
////			LCD_KIT_voidDisplayCharacter('%');
////		}
////
////	}
//
//	return 0;
//}
//

/****************************** I2C *******************************************/

//u8 Return;
//int main(void)
//{
//	I2C_voidInitializtion();
//	LCD_KIT_voidInitialization();
//
//	Return=I2C_Master_SendStartCondition();
//	//LCD_KIT_voidSetCurser(Line1,Col0);
//	//LCD_KIT_voidDisplayBigNumber(Return);
//	Return=I2C_Master_SendSlaveAddress_Write(0x15);
//	LCD_KIT_voidSetCurser(Line2,Col0);
//	LCD_KIT_voidDisplayBigNumber(Return);
//	Return=I2C_Master_SendData(1);
//	_delay_ms(30);
////	LCD_KIT_voidSetCurser(Line3,Col0);
////	LCD_KIT_voidDisplayBigNumber(Return);
//	Return=I2C_Master_SendData(2);
//	_delay_ms(30);
////	LCD_KIT_voidSetCurser(Line4,Col0);
////	LCD_KIT_voidDisplayBigNumber(Return);
//	Return = I2C_Master_SendData(3);
//	_delay_ms(5);
////	LCD_KIT_voidSetCurser(Line1,Col0);
////	LCD_KIT_voidDisplayBigNumber(Return);
//	I2C_Master_SendStopCondition();
//
////	I2C_Master_SendStartCondition();
////	I2C_Master_SendSlaveAddress_Write(0x00);
////	I2C_Master_SendData(0x54);
////	I2C_Master_SendData(0x45);
////	I2C_Master_SendStopCondition();
//
//	while(1)
//	{
//
//	}
//
//	return 0;
//}

/****************************** SPI *******************************************/

u8 Return;

/*
void SPI_RecieveValueByInterrupt(void)
{
	LCD_KIT_voidDisplayCharacter(SPI_SPDR);
}

int main(void)
{
	//SPI_CallBack(SPI_RecieveValueByInterrupt);
	SPI_voidInitialization();
	LCD_KIT_voidInitialization();

	//LCD_KIT_voidDisplayCharacter('B');

//	SPI_voidInterruptEnable();
//	GIE_Enable();

	SPI_MasterTransmit(0x82);
	//LCD_KIT_voidDisplayCharacter('A');
	_delay_ms(500);

	SPI_MasterTransmit(0x84);
	//LCD_KIT_voidDisplayCharacter('B');
	_delay_ms(500);

//	SPI_MasterTransmit(0x86);
//	//LCD_KIT_voidDisplayCharacter('C');
//	_delay_ms(1000);

	while(1)
	{

	}

	return 0;
}

*/


/*************************** Free RTOS ****************************************/

/*

void TasK_Function(  void * PTR )
{

	u8 Pin_ID = *( (u8 *) PTR );

	while(1)
	{
		SET_BIT(DDRA,Pin_ID);
		SET_BIT(PORTA,Pin_ID);

		vTaskDelay(10 * Pin_ID);
	}

}

int main(void)
{

	vTaskStartScheduler();

	void * Handler1 = NULL;
	void * Handler2 = NULL;
	void * Handler3 = NULL;

	u8 LED_ID_1 = 4;
	u8 LED_ID_2 = 5;
	u8 LED_ID_3 = 6;

	u8 Priority = 1;



	xTaskCreate(TasK_Function,"LED1",150,&LED_ID_1,Priority,&Handler1);
	xTaskCreate(TasK_Function,"LED2",150,&LED_ID_2,Priority,&Handler2);
	xTaskCreate(TasK_Function,"LED3",150,&LED_ID_3,Priority,&Handler3);



}
*/


/********************** UART with Bluetooth ***********************************/

void USART_voidRecieveData_Interrupt(void);
void USART_voidSendData_Interrupt(void);

void main()
{

//	Interrupt
//
//	LCD_KIT_voidInitialization();
//	USART_voidInitialization();
//
//	LCD_KIT_voidDisplayCharacter('S');
//
//	USART_RecieveCallBack(USART_voidRecieveData_Interrupt);
//	USART_SendCallBack(USART_voidSendData_Interrupt);
//
//	USART_voidEnableReceiverInterrupt();
//	USART_voidEnableTransmitterInterrupt();
//	GIE_Enable();
//
////	USART_voidSendString_Polling("Ahmed ");

//	POOLING

	LCD_KIT_voidInitialization();
	USART_voidInitialization();

	//LCD_KIT_voidDisplayCharacter('D');

	DIO_voidSetPortDirection(PortA,Output);
	DIO_voidSetPinValue(PortA,Pin5,High);
	DIO_voidSetPinValue(PortA,Pin4,High);
	DIO_voidSetPinValue(PortA,Pin6,High);
	//_delay_ms(1000);

	u8 arr[20]="Hi Mohamed ";

	USART_voidSendString_Polling(arr);

	while(1)
	{
		u8 Temp=0;

		Temp=USART_u8RecieveData_Polling();
		LCD_KIT_voidDisplayCharacter(Temp);

		if(Temp=='1')
		{
			DIO_voidTogglePin(PortA,Pin6);
		}
		else if(Temp=='2')
		{
			DIO_voidTogglePin(PortA,Pin5);
		}
		else if(Temp=='3')
		{
			DIO_voidTogglePin(PortA,Pin4);
		}

		LCD_KIT_voidDisplayCharacter('Z');
		USART_voidSendData_Polling('A');
		//_delay_ms(500);
	}

	while(1)
	{
		LCD_KIT_voidDisplayCharacter('L');
		_delay_ms(500);
	}


	return;
}

void USART_voidRecieveData_Interrupt(void)
{
	LCD_KIT_voidDisplayCharacter('A');
	LCD_KIT_voidDisplayCharacter(UDR);
}

void USART_voidSendData_Interrupt(void)
{
	LCD_KIT_voidDisplayCharacter('H');

	CLR_BIT(UCSRB,TXEN);
	SET_BIT(UCSRB,TXEN);

	USART_voidDisableTransmitterInterrupt();
	USART_voidEnableTransmitterInterrupt();


}


