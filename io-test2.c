#include <stdio.h>

int main()
{
	char ch =0;                                                 //�ڳ������е�ʱ��ctrl+z�ٻس�����ֱ�Ӱ�EOF��ֵ��ch
	while ((ch= getchar()) != EOF)                              // EOF��ȫ�ƽ�end of file(�ļ�������־),����c������ʵ���� -1
	 {
		putchar(ch);                                  	        /*����EOF���Ҳ����EOF����Ϊ����������ַ���while�е�EOF�����ַ����̸�
		                                                                      �˳���᲻�ϵĻ�ȡ����ֵ����Ҫ��ֹ�Ͱ�ctrl+z�س�*/
	}
	return 0;
}