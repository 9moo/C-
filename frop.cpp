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
	printf("������̨����");
	scanf("%d",&n);
	f=frog(n);
	printf("����%d ������",f); 
	
	return 0;	
} 
