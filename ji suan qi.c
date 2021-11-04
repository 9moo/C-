#include<stdio.h>

//计算器 
void menu()
{
	printf("*****************************\n");
	printf("*******1.add     2.sub*******\n");
	printf("*******3.mul     4.div*******\n");
	printf("*******     0.eixt    *******\n");
	printf("*****************************\n");
}

int Add(int x,int y)
{
	return x+y;
}

int Sub(int x,int y)
{
	return x-y;
}

int Mul(int x,int y)
{
	return x*y;
}

int Div(int x,int y)
{
	return x/y;
}

int main(){
	int input;
	int x,y;
	int(*pfarr[5])(int,int)={0,Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("请选择运算\n");
		scanf("%d",&input);
		if(input>=1&&input<=4)
		{
			printf("请输入两个数\n");
			scanf("%d%d",&x,&y);
			int ret=pfarr[input](x,y);
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("退出\n");
		}
		else
		printf("输入有误\n"); 
	}while(input);
	return 0;
}
