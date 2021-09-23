#include<stdio.h>
//创建结构体Book 
struct Book
{
	char name[20];//书名 
	short price;// 价格 
 } ;//";"结束类型定义，不可缺少 
 
 int main()
 {
 //利用结构体类型创建结构体变量 b1 
 	struct Book b1 ={"C语言程序设计",55};
 	struct Book* B1 = &b1;//变量与指针类型需一致 
 	 printf("%s\n",(*B1).name);//利用指针变量打印 
 	 printf("%d\n",B1->price);//"->"更好的指针打印方式
	 printf("书名：%s\n",b1.name);//"."选择成员 
	 printf("价格：%d元\n",b1.price);
	 b1.price = 40;//修改 
	 printf("折后价：%d元\n",b1.price); 
	 
 	return 0;
 }
