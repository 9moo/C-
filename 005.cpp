#include<stdio.h>
int main()
{
	int a = 10;
	int c = 10;
	int b = a++;//后置++，先使用，后++ 
	int d = ++c;//前置++，先++，再使用 
	//a--也相同 
	printf("a = %d b = %d\n",a,b);//11 10 
	printf("c = %d d = %d\n",c,d);//11 11
	return 0;
}
