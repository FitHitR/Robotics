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
				delay(2);   //16
				svm = 0;
				delay(1000);
			}
			
			for(i=0;i<=50;i++)
			{
				svm = 1;         // 12.3
				delay(3);
				svm = 0;
				delay(1500);
			}
			
			for(i=0;i<=50;i++)
			{
				svm = 1;
				delay(4);
				svm = 0;
				delay(2000);
			}
			
			for(i=50;i<=0;i--)
			{
				svm = 1;
				delay(3);
				svm = 0;
				delay(2000);
			}
			
			for(i=50;i<=0;i--)
			{
				svm = 1;
				delay(4);
				svm = 0;
				delay(1500);
			}
			
			for(i=50;i<=0;i--)
			{
				svm = 1;
				delay(2);
				svm = 0;
				delay(1500);
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