// steper motore Full way Forword 

#include<reg51.h>
#include<stdio.h>

sbit stm1 = P2^4;  //Stepper mtr winding 1
sbit stm2 = P2^5;  //2
sbit stm3 = P2^6;  //3
sbit stm4 = P2^7;  //4

	void delay(unsigned int);

	void main()
	{
    while(1)
			{
				stm1 = 0;
				stm2 = 0;
				stm3 = 0;
				stm4 = 1;       // mtr 4 on
				delay(500);
	
				stm1 = 0;
				stm2 = 0;
				stm3 = 1;        // mtr 3 on
				stm4 = 0;
				delay(500);
				
				stm1 = 0;
				stm2 = 1;       // mtr 2 on
				stm3 = 0;
				stm4 = 0;
				delay(500);
				
				stm1 = 1;     // mtr 1 on
				stm2 = 0;
				stm3 = 0;
				stm4 = 0;
				delay(500);
			}
		}
					
		void delay(unsigned int itime)
		{
			unsigned int i,j;
			for(i=0;i<itime;i++)
			{
				j++;
			}
		}
				
	