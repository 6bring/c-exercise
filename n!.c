#include<stdio.h>
int main()
 {
	
	int n = 0;
	int j = 1;
	printf("������һ�����֣�");
	scanf_s("%d", &n);
	for (int i = 1; i <n+1; i++)
	{
		
		j = i * j;
		printf("��%dλ�Ľ׳��ǣ�%d\n", i, j);
		
	}
  }

