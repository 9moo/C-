#include<stdio.h>
int main()
{
	int a = 10;
	int c = 10;
	int b = a++;//����++����ʹ�ã���++ 
	int d = ++c;//ǰ��++����++����ʹ�� 
	//a--Ҳ��ͬ 
	printf("a = %d b = %d\n",a,b);//11 10 
	printf("c = %d d = %d\n",c,d);//11 11
	return 0;
}
