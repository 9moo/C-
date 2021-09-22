#include<stdio.h>

int main()
{
	int a=10;//4个字节
	int*p = &a;//取地址存入p 
	printf("%p\n",&a);//地址用"%p" 
	printf("%p\n",p);
	
	*p=20;//  *  解引用操作符 
	printf("%d\n",a);//a被改成20 
	
	return 0;
}
