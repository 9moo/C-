#include<stdio.h>
//쳲�������

//int fib(int n)//�ݹ��㷨 
//{
//	if(n<=2)
//	return 1;
//	else
//	return fib(n-1)+fib(n-2);
//}
int fib(int n)//ѭ���㷨 
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
	printf("������Ҫ���ҵڼ���쳲�������");
	scanf("%d",&i);
	int fq = fib(i);
	printf("�� %d ��쳲��������� %d",i,fq); 
	return 0;
} 
