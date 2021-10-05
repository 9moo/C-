#include<stdio.h>
#include<math.h>
void sushu(int x)
{

	int i;
	
	for(i=2;i<=sqrt(x);i++)//试除法 
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i<=sqrt(x))
	printf("不是素数");
	else
	printf("是素数");
	
}
int main(){
	printf("输入要判断的数\n"); 
	int a;
	scanf("%d",&a);
	sushu(a);
	return 0;
}
