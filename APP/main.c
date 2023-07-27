/*
 * APP.c
 *
 *  Created on: Jul 22, 2023
 *      Author: hp
 */

#include "STD_Types.h"
#include "Macros.h"

//#include <math.h>

#include "DIO_int.h"
//#include "7SEG_int.h"
//#include "SEG_KIT_int.h"
#include "LCD_KIT_int.h"
//#include "KEYBAD_int.h"
//#include "KEYPAD_priv.h"

#include <util/delay.h>

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

int main(void)
{
	LCD_KIT_voidInitialization();

/***** Story of Bary *****/
//
//	u8 Delay_Counter=0;
//
//	u8 Leg_10=1,Leg_9=1,Leg_8=1;
//
////setting custom character array
//	u8 Person_State[6][8]=
//	{
//		{0x04,0x0A,0x04,0x1F,0x04,0x04,0x0A,0x0A},
//		{0x04,0x0A,0x05,0x0E,0x14,0x04,0x0A,0x11},
//		{0x04,0x0A,0x14,0x0E,0x05,0x04,0x0A,0x11},
//		{0x08,0x14,0x09,0x0A,0x04,0x0B,0x12,0x00},
//		{0x02,0x05,0x12,0x0A,0x04,0x1A,0x09,0x00},
//		{0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}
//	};
//
//// Store characters
//	LCD_KIT_voidStoreCustomCharacter(Person_State[0],0x40);
//	LCD_KIT_voidStoreCustomCharacter(Person_State[1],0x48);
//	LCD_KIT_voidStoreCustomCharacter(Person_State[2],0x50);
//	LCD_KIT_voidStoreCustomCharacter(Person_State[3],0x58);
//	LCD_KIT_voidStoreCustomCharacter(Person_State[4],0x60);
//	LCD_KIT_voidStoreCustomCharacter(Person_State[5],0x68);
//
//// Ready-Steady-Go stage
//	LCD_KIT_voidSetCurser(Line1,Col7);
//	LCD_KIT_voidDisplayString("Ready");
//	_delay_ms(500);
//	LCD_KIT_voidRunCommand(Clear_LCD);
//
//	LCD_KIT_voidSetCurser(Line1,Col7);
//	LCD_KIT_voidDisplayString("Steady");
//	_delay_ms(500);
//	LCD_KIT_voidRunCommand(Clear_LCD);
//
//	LCD_KIT_voidSetCurser(Line1,Col9);
//	LCD_KIT_voidDisplayString("GO");
//	_delay_ms(500);
//	LCD_KIT_voidRunCommand(Clear_LCD);
//
//// Setting players positions
//	LCD_KIT_voidSetCurser(Line3,Col0);
//	LCD_KIT_voidDisplayCharacter(0x00);
//
//	LCD_KIT_voidSetCurser(Line2,Col0);
//	LCD_KIT_voidDisplayCharacter(0x00);
//
//	LCD_KIT_voidSetCurser(Line4,Col0);
//	LCD_KIT_voidDisplayCharacter(0x00);
//
//// Setting Barriers Positions
//	LCD_KIT_voidSetCurser(Line2,Col2);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//	LCD_KIT_voidSetCurser(Line2,Col18);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//
//	LCD_KIT_voidSetCurser(Line3,Col10);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//	LCD_KIT_voidSetCurser(Line3,Col16);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//
//	LCD_KIT_voidSetCurser(Line4,Col13);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//	LCD_KIT_voidSetCurser(Line4,Col17);
//	LCD_KIT_voidDisplayCharacter(0xFF);
//
//// Setting End line Positions
//	LCD_KIT_voidSetCurser(Line2,Col19);
//	LCD_KIT_voidDisplayCharacter(0x05);
//	LCD_KIT_voidSetCurser(Line3,Col19);
//	LCD_KIT_voidDisplayCharacter(0x05);
//	LCD_KIT_voidSetCurser(Line4,Col19);
//	LCD_KIT_voidDisplayCharacter(0x05);
//
//// Start Game
//	LCD_KIT_voidSetCurser(Line1,Col4);
//	LCD_KIT_voidDisplayString("Run Bary Run");
//
//	while(1)
//	{
//		if(Delay_Counter<153)
//		{
//			_delay_ms(10);
//			Delay_Counter++;
//
//			if(Delay_Counter%10==0)
//			{
//				if((Delay_Counter/10==2)||(Delay_Counter/10==3)||(Delay_Counter/10==18)||(Delay_Counter/10==19))
//				{
//					if(Leg_10==1)
//					{
//						LCD_KIT_voidSetCurser(Line1,Delay_Counter/10);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
//						LCD_KIT_voidDisplayCharacter(0x03);
//						Leg_10=2;
//					}
//					else if(Leg_10==2)
//					{
//						LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line1,Delay_Counter/10);
//						LCD_KIT_voidDisplayCharacter(0x04);
//						Leg_10=1;
//					}
//				}
//				else
//				{
//					LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
//					LCD_KIT_voidRunCommand(0x10);
//					LCD_KIT_voidDisplayCharacter(' ');
//					LCD_KIT_voidSetCurser(Line2,Delay_Counter/10);
//
//					if(Leg_10==1)
//					{
//						LCD_KIT_voidDisplayCharacter(0x01);
//						Leg_10=2;
//					}
//					else if(Leg_10==2)
//					{
//						LCD_KIT_voidDisplayCharacter(0x02);
//						Leg_10=1;
//					}
//				}
//			}
//
//			if(Delay_Counter%9==0)
//			{
//				if((Delay_Counter/9==13)||(Delay_Counter/9==14)||(Delay_Counter/9==17)||(Delay_Counter/9==18))
//				{
//					if(Leg_9==1)
//					{
//						LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line3,Delay_Counter/9);
//						LCD_KIT_voidDisplayCharacter(0x01);
//						Leg_9=2;
//					}
//					else if(Leg_9==2)
//					{
//						LCD_KIT_voidSetCurser(Line3,Delay_Counter/9);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
//						LCD_KIT_voidDisplayCharacter(0x02);
//						Leg_9=1;
//					}
//				}
//				else
//				{
//					LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
//					LCD_KIT_voidRunCommand(0x10);
//					LCD_KIT_voidDisplayCharacter(' ');
//					LCD_KIT_voidSetCurser(Line4,Delay_Counter/9);
//
//					if(Leg_9==1)
//					{
//						LCD_KIT_voidDisplayCharacter(0x01);
//						Leg_9=2;
//					}
//					else if(Leg_9==2)
//					{
//						LCD_KIT_voidDisplayCharacter(0x02);
//						Leg_9=1;
//					}
//				}
//			}
//
//			if(Delay_Counter%8==0)
//			{
//				if((Delay_Counter/8==10)||(Delay_Counter/8==11)||(Delay_Counter/8==16)||(Delay_Counter/8==17))
//				{
//					if(Leg_8==1)
//					{
//						LCD_KIT_voidSetCurser(Line2,Delay_Counter/8);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
//						LCD_KIT_voidDisplayCharacter(0x01);
//						Leg_8=2;
//					}
//					else if(Leg_8==2)
//					{
//						LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
//						LCD_KIT_voidRunCommand(0x10);
//						LCD_KIT_voidDisplayCharacter(' ');
//						LCD_KIT_voidSetCurser(Line2,Delay_Counter/8);
//						LCD_KIT_voidDisplayCharacter(0x02);
//						Leg_8=1;
//					}
//				}
//				else
//				{
//					LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
//					LCD_KIT_voidRunCommand(0x10);
//					LCD_KIT_voidDisplayCharacter(' ');
//					LCD_KIT_voidSetCurser(Line3,Delay_Counter/8);
//
//					if(Leg_8==1)
//					{
//						LCD_KIT_voidDisplayCharacter(0x01);
//						Leg_8=2;
//					}
//					else if(Leg_8==2)
//					{
//						LCD_KIT_voidDisplayCharacter(0x02);
//						Leg_8=1;
//					}
//				}
//			}
//		}
//		else
//		{
//			LCD_KIT_voidSetCurser(Line2,Col19);
//			LCD_KIT_voidDisplayCharacter(' ');
//			LCD_KIT_voidSetCurser(Line4,Col19);
//			LCD_KIT_voidDisplayCharacter(' ');
//			_delay_ms(100);
//			break;
//		}
//	}
//
//	LCD_KIT_voidRunCommand(0x01);
//	LCD_KIT_voidDisplayString(" The winner is Bary");
//	LCD_KIT_voidSetCurser(Line2,Col0);
//	LCD_KIT_voidDisplayString("Bary has just broken");
//	LCD_KIT_voidSetCurser(Line3,Col0);
//	LCD_KIT_voidDisplayString("  the WORLD RECORD");
//
////setting custom character array
//	u8 Arabic_Word[6][8]=
//	{
//		{0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00},
//		{0x01,0x01,0x01,0x01,0x01,0x01,0x1F,0x00},
//		{0x00,0x00,0x0E,0x01,0x01,0x01,0x1E,0x00},
//		{0x00,0x00,0x06,0x09,0x09,0x09,0x16,0x00},
//		{0x00,0x00,0x01,0x01,0x01,0x01,0x0F,0x00},
//		{0x00,0x06,0x09,0x09,0x07,0x01,0x01,0x00}
//	};
//
//// Store characters
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[0],0x40);
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[1],0x48);
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[2],0x50);
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[3],0x58);
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[4],0x60);
//	LCD_KIT_voidStoreCustomCharacter(Arabic_Word[5],0x68);
//
//// Setting Cursor to shift left to print Arabic word
//	LCD_KIT_voidRunCommand(0x04);
//
//// Return cursor to DDRAM
//	LCD_KIT_voidSetCurser(Line4, Col13);
//
//// Printing Arabic word
//	LCD_KIT_voidDisplayCharacter(0);
//	LCD_KIT_voidDisplayCharacter(1);
//	LCD_KIT_voidDisplayCharacter(2);
//	LCD_KIT_voidDisplayCharacter(3);
//	LCD_KIT_voidDisplayCharacter(4);
//
//	LCD_KIT_voidDisplayCharacter(1);
//	LCD_KIT_voidDisplayCharacter(1);
//	LCD_KIT_voidDisplayCharacter(5);


/***** Game *****/

	u8 Way_Flag, Previous_Way_flag, Col_Index=2, Line_Index=1;

		u8 Ball[8]={0x00,0x00,0x0E,0x1F,0x1F,0x1F,0x0E,0x00};
		LCD_KIT_voidStoreCustomCharacter(Ball,0x40);

		LCD_KIT_voidSetCurser(Line1,Col0);
		LCD_KIT_voidDisplayCharacter(0x00);

		while(1)
		{
			if(!DIO_u8GetPinValue(Switch_Port,Go_To_Right))
			{
				LCD_KIT_voidRunCommand(0x06);
				LCD_KIT_voidRunCommand(0x10);
				LCD_KIT_voidDisplayCharacter(' ');
				LCD_KIT_voidDisplayCharacter(0x00);
				Way_Flag=Right;
				Previous_Way_flag=Right;
				break;
			}
		}

		while(1)
		{
			if((Col_Index == 0)||(Col_Index == 21))
			{
				LCD_KIT_voidRunCommand(0x06);
				LCD_KIT_voidSetCurser(Line1,Col5);
				LCD_KIT_voidDisplayString("Game Over");
				break;
			}

			_delay_ms(200);

			if(!DIO_u8GetPinValue(Switch_Port,Go_To_Right))
			{
				LCD_KIT_voidRunCommand(0x06);
				Way_Flag=Right;
				_delay_ms(200);
			}
			else if(!DIO_u8GetPinValue(Switch_Port,Go_To_Left))
			{
				LCD_KIT_voidRunCommand(0x04);
				Way_Flag=Left;
				_delay_ms(200);
			}
			else if(!DIO_u8GetPinValue(PortD,Go_To_Up))
			{
				if(Way_Flag==Right)
				{
					LCD_KIT_voidRunCommand(Left);
					LCD_KIT_voidDisplayCharacter(' ');
				}
				else if(Way_Flag==Left)
				{
					LCD_KIT_voidRunCommand(Right);
					LCD_KIT_voidDisplayCharacter(' ');
				}

				if(Line_Index==1)
				{
					LCD_KIT_voidRunCommand(0x06);
					LCD_KIT_voidSetCurser(Line1,Col5);
					LCD_KIT_voidDisplayString("Game Over");
					break;
				}

				switch(Line_Index)
				{
				case 2:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line1,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line1,Col_Index); break;
					}

				case 3:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line2,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line2,Col_Index); break;
					}

				case 4:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line3,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line3,Col_Index); break;
					}
				}
				Line_Index--;
				_delay_ms(200);
			}
			else if (!DIO_u8GetPinValue(PortD,Go_To_Down))
			{
				if(Way_Flag==Right)
				{
					LCD_KIT_voidRunCommand(Left);
					LCD_KIT_voidDisplayCharacter(' ');
				}
				else if(Way_Flag==Left)
				{
					LCD_KIT_voidRunCommand(Right);
					LCD_KIT_voidDisplayCharacter(' ');
				}

				if(Line_Index==4)
				{
					LCD_KIT_voidRunCommand(0x06);
					LCD_KIT_voidSetCurser(Line1,Col5);
					LCD_KIT_voidDisplayString("Game Over");
					break;
				}

				switch(Line_Index)
				{
				case 1:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line2,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line2,Col_Index); break;
					}

				case 2:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line3,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line3,Col_Index); break;
					}

				case 3:
					if(Way_Flag==Left)
					{
						LCD_KIT_voidSetCurser(Line4,Col_Index-2); break;
					}
					else
					{
						LCD_KIT_voidSetCurser(Line4,Col_Index); break;
					}
				}
				Line_Index++;
				_delay_ms(200);
			}

			if((Way_Flag==Left)&&(Previous_Way_flag==Left))
			{
				Col_Index--;
				LCD_KIT_voidRunCommand(Right);
				LCD_KIT_voidDisplayCharacter(' ');

				if(Col_Index > 0)
				{
					LCD_KIT_voidDisplayCharacter(0x00);
				}
			}
			else if((Way_Flag==Left)&&(Previous_Way_flag==Right))
			{
				LCD_KIT_voidRunCommand(Left);
				LCD_KIT_voidDisplayCharacter(' ');
				LCD_KIT_voidDisplayCharacter(0x00);
				Previous_Way_flag=Left;
				Col_Index--;
			}
			else if((Way_Flag==Right)&&(Previous_Way_flag==Right))
			{
				Col_Index++;
				LCD_KIT_voidRunCommand(Left);
				LCD_KIT_voidDisplayCharacter(' ');

				if(Col_Index<21)
				{
					LCD_KIT_voidDisplayCharacter(0x00);
				}
			}
			else if((Way_Flag==Right)&&(Previous_Way_flag==Left))
			{
				LCD_KIT_voidRunCommand(Right);
				LCD_KIT_voidDisplayCharacter(' ');
				LCD_KIT_voidDisplayCharacter(0x00);
				Previous_Way_flag=Right;
				Col_Index++;
			}

	}

	return 0;
}

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
//}//
