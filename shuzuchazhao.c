#include<stdio.h>]
int main()
 {
	int a = 7;
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz;i++ )
		{
		if (7==arr[i])
		{
			printf("����arr[%d]=%d", i, a);
			break;
		}
		else if (i==sz)
		{
			printf("������û���������");
		}
		 }
	return 0;

  }
