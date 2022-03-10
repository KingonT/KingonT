#include <REGX52.H>
sbit LED=P2^1;

void Delay(unsigned char t)
{
     while(t--);

}

void main()
{
	unsigned char time,i;
	
	while(1)
	{
	for(time=0;time<100;time++)
	{
		for(i=0;i<20;i++)
		{
		LED=0;
		Delay(time);
		LED=1;
		Delay(100-time);
		}
	}		
	for(time=100;time>0;time--)
	{
		for(i=0 ;i<20;i++)
		{
		LED=0;
		Delay(time);
		LED=1;
		Delay(100-time);
		}

	}

	}
}	
	