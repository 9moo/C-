#include<stdio.h>
void swap(int* pa,int* pb)
{
	int x;
	x=*pa;
	*pa=*pb;
	*pb=x;
}
int main(){
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
} 
