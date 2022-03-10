#include <REGX52.H>
#include  "Delay.h"

/**
  * @brief 获取独立按键码
  * @param 无
  * @retval 按下按键的键码，范围：0~4，无按键按下时返回值为零
  *
  */
   
unsigned char key()
{
  unsigned char keynum=0;
	if(P3_1==0){Delay(20);while(P3_1==0);Delay(20);keynum=1;}
  if(P3_0==0){Delay(20);while(P3_0==0);Delay(20);keynum=2;}
  if(P3_2==0){Delay(20);while(P3_2==0);Delay(20);keynum=3;}
  if(P3_3==0){Delay(20);while(P3_3==0);Delay(20);keynum=4;}
 return keynum;
}