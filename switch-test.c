#include<stdio.h>

int main()
{
	long int i =0;
	printf("请输入一个数字：");
	scanf_s("%d",&i);                                          //scanf语句里面除了%不能有其他语句，想有输出只能用printf语句

	switch (i % 2)                                             //switch的括号里必须是整型表达式
	{
	case 0:                                                    //case后面接的必须是整型常量表达式
	{printf("%d是偶数", i);
	break; }
	case 1:                                                    //case后面接的必须是整型常量表达式
	{printf("%d是奇数", i);
	break; }
	case 2:
	{printf("%d是偶数", i);
	break; }
	case 3:                                                    //刚开始输出只有输入5的时候有显示，后来发现少了一个case0的情况，加上后可以正常显示
	{printf("%d是奇数", i);
	break; }
	case 4:
	{printf("%d是偶数", i);
	break; }
	case 5:
	{printf("%d是奇数", i);
	break; }
	case 6:
	{printf("%d是偶数", i);
	break; }
	case 7:
		printf("%d是奇数", i);
		break;
	case 8:
		printf("%d是偶数", i);
		break;
	case 9:
		printf("%d是奇数", i);
		break;
	
	}
	switch (i)
	{
	case 1:
		printf("星期一", &i);
		break;
	case 2:
		printf("星期二", &i);
		break;
	case 3:
		printf("星期三", &i);
		break;
	case 4:
		printf("星期四", &i);
		break;
	case 5:
		printf("星期五", &i);
		break;
	case 6:
		printf("星期六", &i);
		break;
	case 7:
		printf("星期七", &i);
		break;
	default:
		break;
	}
	
 }