#include<stdio.h>

int main()
{
	int a=10;//4���ֽ�
	int*p = &a;//ȡ��ַ����p 
	printf("%p\n",&a);//��ַ��"%p" 
	printf("%p\n",p);
	
	*p=20;//  *  �����ò����� 
	printf("%d\n",a);//a���ĳ�20 
	
	return 0;
}
