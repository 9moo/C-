#include<stdio.h>
int main(){
	int a,i,b;
	int count=0;
	printf("����������");
	scanf("%d",&a);
	for(i=0;i<32;i++)
	{
		b = a>>i;
		if(b & 1 == 1)
		count++;
	}
	 printf("������ƹ���%d����1 ��",count);
	return 0;
}
