#include<stdio.h>

int main()
{
	long int i =0;
	printf("������һ�����֣�");
	scanf_s("%d",&i);                                          //scanf����������%������������䣬�������ֻ����printf���

	switch (i % 2)                                             //switch����������������ͱ��ʽ
	{
	case 0:                                                    //case����ӵı��������ͳ������ʽ
	{printf("%d��ż��", i);
	break; }
	case 1:                                                    //case����ӵı��������ͳ������ʽ
	{printf("%d������", i);
	break; }
	case 2:
	{printf("%d��ż��", i);
	break; }
	case 3:                                                    //�տ�ʼ���ֻ������5��ʱ������ʾ��������������һ��case0����������Ϻ����������ʾ
	{printf("%d������", i);
	break; }
	case 4:
	{printf("%d��ż��", i);
	break; }
	case 5:
	{printf("%d������", i);
	break; }
	case 6:
	{printf("%d��ż��", i);
	break; }
	case 7:
		printf("%d������", i);
		break;
	case 8:
		printf("%d��ż��", i);
		break;
	case 9:
		printf("%d������", i);
		break;
	
	}
	switch (i)
	{
	case 1:
		printf("����һ", &i);
		break;
	case 2:
		printf("���ڶ�", &i);
		break;
	case 3:
		printf("������", &i);
		break;
	case 4:
		printf("������", &i);
		break;
	case 5:
		printf("������", &i);
		break;
	case 6:
		printf("������", &i);
		break;
	case 7:
		printf("������", &i);
		break;
	default:
		break;
	}
	
 }