#include<stdio.h>
#include<math.h>
void sushu(int x)
{

	int i;
	
	for(i=2;i<=sqrt(x);i++)//�Գ��� 
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i<=sqrt(x))
	printf("��������");
	else
	printf("������");
	
}
int main(){
	printf("����Ҫ�жϵ���\n"); 
	int a;
	scanf("%d",&a);
	sushu(a);
	return 0;
}
