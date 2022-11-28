#include <stdio.h>

int main()
{
	char ch =0;                                                 //在程序运行的时候按ctrl+z再回车可以直接把EOF赋值给ch
	while ((ch= getchar()) != EOF)                              // EOF的全称叫end of file(文件结束标志),他在c语言中实际是 -1
	 {
		putchar(ch);                                  	        /*输入EOF输出也会是EOF，因为这输入的是字符，while中的EOF不是字符奸商给
		                                                                      此程序会不断的获取输入值，想要终止就按ctrl+z回车*/
	}
	return 0;
}