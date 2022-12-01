#include<stdio.h>
int main()
 {
	static int h = 0;
	for (int n= 1; n < 11; n++)                             //n的循环代表10次内循环，正好对应1！一直加到10！
	{
		int j = 1;
		
		for (int i = 1; i < n+1; i++)                     /*此程序之所以n需要加一才进入内循环是因为i=1,如果n=1，第一次循环不成立。而h仍然加了一次j,占了一次循环，
			                                                     故解决方法只有使外循环从2开始，也相当于n+1或者内循环使n+1算法才能够成立*/
		{                                                //内循环用于计算阶乘
			j = i * j;
		}
		h = h + j;                                       //h用于存放阶乘相加的结果
	}
	printf("1!+2!+...+10!=%d",h);
 }
/*此程序有优化方案
int main()
 {
  int i =0;
  int n =0;
  int ret =1;
  int sum =0;
  for(n=1;n<11;n++)
    {
	 ret=ret*n;
	 sum =sum+ret;
	}
	printf("sum=%d\n",sum);
	return 0;
  }
*/
