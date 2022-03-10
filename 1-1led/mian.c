#include <REGX52.H>
void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
while(xms)
	{
		i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
  xms--;
	}
     
}
		
	
void mian()
{
	while(1)
	{
	P2=0xFE;//1111 1110
	Delay1ms(250);
	P2=0xFF;//1111 1111
	Delay1ms(250);
	}
	

}