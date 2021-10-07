#include<stdio.h>
//斐波那契数

//int fib(int n)//递归算法 
//{
//	if(n<=2)
//	return 1;
//	else
//	return fib(n-1)+fib(n-2);
//}
int fib(int n)//循环算法 
{
	int a=1;
	int b=1;
	int c=1;
	int i=0;
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	} 
	return c;
 } 
int main(){
	int i;
	printf("请输入要查找第几个斐波那契数");
	scanf("%d",&i);
	int fq = fib(i);
	printf("第 %d 个斐波那契数是 %d",i,fq); 
	return 0;
} 
