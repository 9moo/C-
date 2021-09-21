#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main() {
//	int a = 0;
//	int b = 0;
//	printf("请输入要比较大小的两个数\n");//求最大值
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	printf("最大值是 %d\n",a);
//	else
//	printf("最大值是 %d\n",b);
//	return 0;
//}
int Max(int x,int y)//创建Max函数 
{
	if(x>y)
	return x;
	else
	return y;
}
int main()
{
int a=0;
int b=0;
int m=0;
	printf("请输入要比较大小的两个数\n");
	scanf("%d%d",&a,&b);
	m=Max(a,b);//将a b 输入到函数中 
	printf("较大的数为%d\n",m);//输出m 
	return 0;
}
