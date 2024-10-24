// Dc motar inter facing with

	#include<reg51.h>
	
	sbit en12 = P1^0;
	sbit en34 = P1^5;
	
	sbit inp1 = P1^1;
	sbit inp2 = P1^2;
	sbit inp3 = P1^3;
	sbit inp4 = P1^4;
	
	void delay(unsigned int);
	
	int main()
	{
		en12 = 1;
		en34 = 1;
		while(1)
		{
			inp1 = 1;
			inp2 = 0;
			inp3 = 1;
			inp4 = 0;
			delay(50000);
			delay(50000);
			
			inp1 = 0;
			inp2 = 0;
			inp3 = 0;
			inp4 = 0;
			delay(50000);
			delay(50000);
			//-----------------------------------
			inp1 = 0;
			inp2 = 1;
			inp3 = 0;
			inp4 = 1;
			delay(50000);
			delay(50000);
			
			inp1 = 1;
			inp2 = 0;
			inp3 = 1;
			inp4 = 0;
			delay(50000);
			delay(50000);
		}
	}
	
	void delay(unsigned int itime)
	{
		unsigned int i,j;
		for(i=0;i<itime;i++)
		{
			j++;
		}
		//for (j=0;j<125;j++)
	}