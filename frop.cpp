#include<stdio.h>
int frog(int n)
{

	if(n>=3) 
	return frog(n-1)+frog(n-2);
	else if(n==2)
	return 1;
	else
	return 1;
}
int main(){
	int n;
	int f;
	printf("请输入台阶数");
	scanf("%d",&n);
	f=frog(n);
	printf("共有%d 种跳法",f); 
	
	return 0;	
} 
