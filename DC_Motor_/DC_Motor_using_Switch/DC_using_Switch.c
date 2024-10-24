//DC motor using swiching

#include<reg51.h>
sbit in1=P2^0;
sbit in2=P2^1;
sbit in3=P2^2;
sbit in4=P2^3;
sbit F=P3^0;
sbit D=P3^1;
sbit R=P3^2;
sbit L=P3^3;


void main()
{
	F=1;
	D=1;
	R=1;
	L=1;
	   
	while(1)
	{
		
		if(F==0 && D==1 && R==1 && L==1)
		{
			in1=1;
			in2=0;			
			in3=1;
			in4=0;
			
		}
		else if(F==1 && D==0 && R==1 && L==1)
		{
			in1=0;
			in2=1;			
			in3=0;
			in4=1;
			
		}
		else if(F==1 && D==1 && R==0 && L==1)
		{
			in1=1;
			in2=0;			
			in3=0;
			in4=0;
			
		}
		else if(F==1 && D==1 && R==1 && L==0)
		{
			in1=0;
			in2=1;		
			in3=0;
			in4=0;
			
		}
		else 
		{
			
			in1=0;
			in2=0;
			in3=0;
			in4=0;
			
		}
	}
}