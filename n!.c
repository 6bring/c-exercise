#include<stdio.h>
int main()
 {
	
	int n = 0;
	int j = 1;
	printf("请输入一个数字：");
	scanf_s("%d", &n);
	for (int i = 1; i <n+1; i++)
	{
		
		j = i * j;
		printf("第%d位的阶乘是：%d\n", i, j);
		
	}
  }

