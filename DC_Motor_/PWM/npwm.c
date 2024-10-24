/* program to generate pwm to controal Dc Motor */

#include<reg51.h>
#include<stdio.h>

	sbit en12 = P1^0;   // enable pin for dc motor
	sbit en34 = P1^5;
	
	sbit inp1 = P1^1;  // input pin 
	sbit inp2 = P1^2;
	
	bit start,c;
	bit b = 1;
	
	void init_timer_1();
	void uart();
	void init_timer_0();
	void timer_isr();
	
	void tx();
	void rx();
	
	unsigned int x,y,z,j;
	int ton,toff;
	int init_on,init_off = 0x62;
	
	void timer_0_isr() interrupt 1 using 2   //interrupt routing
	{
		init_timer_0();
		if(c)
		{
			init_on = z;
			timer_isr();
		}
	}
	
	void main()
	{
		IP = 0x00;
		ton = 0x32;       // initial default value ton and toff
		toff = 0x32;
		init_timer_1();    // init the timer for baud rate
		uart();
		
		printf("\n\t\t welcome to pwm Generation For DC Motor \t\t\t\n");
		printf("\n\t\t Enter any Two Number to Speed Control  \t\t\t\n");
		init_timer_0();
		EA = 1;
		start = 1;
		
		while(
	}