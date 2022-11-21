#include<stdio.h>

struct libary
{
	char BookName[20];
	char WriterName[10];
	float Price;
 };                                                                //定义结构体图书馆
int main()
{
	struct libary b1={"斗破苍穹","天蚕土豆",49.5};                 //声明结构体变量创建一本书
	printf("书名：《%s》\t",b1.BookName);                          //输出函数，\t表示横移一个制表符位
	printf("作者名：%s\t", b1.WriterName);
	printf("价格：%f",b1.Price);
}