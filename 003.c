#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main() {
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ�Ƚϴ�С��������\n");
//	scanf("%d%d",&a,&b);
//	if(a>b)
//	printf("���ֵ�� %d\n",a);
//	else
//	printf("���ֵ�� %d\n",b);
//	return 0;
//}
int Max(int x,int y)//����Max���� 
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
	printf("������Ҫ�Ƚϴ�С��������\n");
	scanf("%d%d",&a,&b);
	m=Max(a,b);//��a b ���뵽������ 
	printf("�ϴ����Ϊ%d\n",m);//���m 
	return 0;
}
