#include <iostream>
//static���ξֲ�����Ϊ��̬�ֲ����� ʹ���������ڱ䳤 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int g_val = 2021;//ȫ�ֱ��� 
 void test()
 {
 //int a = 1;//  aΪһ�������ÿ���������н���a�����٣��ٴ����к������¸�ֵ�����н��Ϊ22222 
 static int a = 1;//  a��һ����̬�ֲ��������ٵ��������н���ʱ���٣����н��Ϊ23456 
 a++;
 printf("a = %d\n",a);
 }
 
int main() 
{
	int i = 0;
	while (i<5)
	{
		test();
		i++;
	}

	return 0;
}
