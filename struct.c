#include<stdio.h>

struct libary
{
	char BookName[20];
	char WriterName[10];
	float Price;
 };                                                                //����ṹ��ͼ���
int main()
{
	struct libary b1={"���Ʋ��","�������",49.5};                 //�����ṹ���������һ����
	printf("��������%s��\t",b1.BookName);                          //���������\t��ʾ����һ���Ʊ��λ
	printf("��������%s\t", b1.WriterName);
	printf("�۸�%f",b1.Price);
}