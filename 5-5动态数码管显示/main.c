#include <REGX52.H>
unsigned char goushi[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f};
void Delay(unsigned int xms)	
{
	unsigned char i, j;
	
	while(xms--)
{
i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);

}

}


void md(unsigned char location,number)
{
    switch(location)
		{
			case 1:P2_4=1;P2_3=1;P2_2=1;break;
			case 2:P2_4=1;P2_3=1;P2_2=0;break;
			case 3:P2_4=1;P2_3=0;P2_2=1;break;
			case 4:P2_4=1;P2_3=0;P2_2=0;break;
			case 5:P2_4=0;P2_3=1;P2_2=1;break;
			case 6:P2_4=0;P2_3=1;P2_2=0;break;
			case 7:P2_4=0;P2_3=0;P2_2=1;break;
			case 8:P2_4=0;P2_3=0;P2_2=0;break;
		}
			P0=goushi[number];
				Delay(1);//wen ding xain shi
		  P0=0x00;//1111 1111
		  
}

void main()
{
	

 while(1)
 {
 	 
	 
	 md(1,1);
	 	 //Delay(10);
	 md(2,2);
	 	 //Delay(10);
	 md(3,3);
		 //Delay(200);
	 md(4,0);
		 //Delay(200);
	 md(5,6);
		 //Delay(200);
	 md(6,5);
		 //Delay(200);
	 md(7,5);
		 //Delay(200);
	 md(8,5);
		 //Delay(200);
	 
 }



}