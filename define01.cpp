#include<stdio.h>
//�궨�峣�� 
//#define huj 100
//int main(){
//	int a=huj;
//	printf("%d",a);
//	return 0;
//}


 //��������
 
 int Max(int x,int y)
 {
 	return x>y?x:y;
 }
	 
//��Ķ���
#define MAX(X,Y) (X>Y?X:Y)

 int main()
 {
 	int a = 28;
 	int b = 46;
 	//����
	 int max = Max(a,b);
	 printf("����max = %d\n",max);
	 //��ķ�ʽ
	 max = MAX(a,b);
	 printf("��max = %d\n",max); 
	 return 0;
 }
