#include<reg51f.h>

sbit svm = P1^6;    // Servo mtr is connected in port 1.6

void delay(unsigned int);
unsigned int i,j,k;

	void main()
	{
		while(1)
		{
			for(i=0;i<=50;i++)
			{
				svm = 1;
				delay(1000);
				svm = 0;
				delay(37);
			}
			
			for(i=0;i<=50;i++)
			{
				svm = 3;
				delay(2000);
				svm = 0;
				delay(37);
			}
			
			
		}
	}
	
	void delay(unsigned int itime)
	{
		for(j=0;j<itime;j++)
		{
			for(k=0;k<=60;k++);
		}
	}