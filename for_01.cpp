#include<stdio.h>
int main(){
	int i;
	//初始化，判断，调整 
	for(i=1;i<=10;i++){
		printf("%d ",i);
	}
	//变种1 
//	for (;;)//判断部分省略则恒为真 
//	{
//		printf("hehe") 
//	}
	int x,y;
	for (x=0,y=0;x<2&&y<5;++x,y++)
		printf("hehe  ");
	return 0;
}

