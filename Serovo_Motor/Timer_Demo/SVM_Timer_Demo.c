#include<reg51.h>

sbit svm = P1^6;

	void left(void);
	void centre(void);
	void right(void);
	
	
	void main()
	 {
		 unsigned int i;
		 while(1)
		 {
			 for(i=0;i<200;i++)
			 {
				 left();
			 }
			 delay(100);
			 
			 for(i=0;i<100;i++)
			 {
				 centre();
			 }
			 delay(100);
			 
			 for(i=0;i<100;i++)
			 {
				 right();
			 }
			 delay(100);
		 }
	 }
	 
	 void left(void)
	  {
			TMOD = 0x01;
			TH0 = 0xFB;
			TL0 = 0x7F;
			TR0 = 1;
			while(!TF0)
			{}                  //1.25ms
			svm =~ svm;
			TF0 = 0;
			TR0 = 0;
	  }
		
		void centre(void)
	  {
			TMOD = 0x01;
			TH0 = 0xFA;
			TL0 = 0x99;
			TR0 = 1;
			while(!TF0)
			{}                 //1.5ms
			svm =~ svm;
			TF0 = 0;
			TR0 = 0;
	  }
		
		void right(void)
	  {
			TMOD = 0x01;
			TH0 = 0xF9;
			TL0 = 0xB3;
			TR0 = 1;
			while(!TF0)
			{}                   //1.75ms
			svm =~ svm;
			TF0 = 0;
			TR0 = 0;
	  }
		
	