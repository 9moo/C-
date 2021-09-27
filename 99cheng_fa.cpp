#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d*%d=%-2d ",b,a,a*b);
			//%2d占两位不够左边补空格，%-2d右边补空格 
			}
			printf("\n");
	}
	return 0;
}
