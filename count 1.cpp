#include<stdio.h>
int main(){
	int a,i,b;
	int count=0;
	printf("请输入数字");
	scanf("%d",&a);
	for(i=0;i<32;i++)
	{
		b = a>>i;
		if(b & 1 == 1)
		count++;
	}
	 printf("其二进制共有%d个‘1 ’",count);
	return 0;
}
