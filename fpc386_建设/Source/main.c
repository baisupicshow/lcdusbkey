#include "STC15F2K60S2.H"
#include "JLX_LCD_v2.0.h"

extern unsigned char code zhongguo[];

void main()
{
	P2M1 = 0x00;
	P2M0 = 0x2F;
	LCD_LED = 1;
	CS = 0;
    InitLCD();
    CleanLCD();
//    DisplayString1608(0,0,"ABCDEFGHIJKLMNOPQRSTUVWX");
//    DisplayString1608(2,0,"YZabcdefghijklmnopqrstuv");
//    DisplayString1608(4,0,"wxyz12345678901234567890");
//    DisplayString1608(6,0,"123456789012345678901234");
//------------------------------------------------	
	DisplayString1616(0,8*0,"Ů����");
	DisplayString1616(2,8*0,"��Ư����������");
	DisplayString1616(4,8*0,"���������޵�");
	DisplayString1616(6,8*12,"�й���������");
	
//	DisplayString1616(6,96,"�й���������");
//------------------------------------------------	
//	DisplayString1616(6,96,"�й���������");
	
    while(1);
}