#include<stdio.h> 


 int main()
 {
 	int a,b;
 	int i = 1;
 	while(i<=100)//��ӡ1-100������ 
	 {
	 if (i%2==1)
	 	printf("%d  ",i);
	 i++;
	 }
	 //�ж�һ��������ż 
	 printf("\n������һ����\n"); 
	 scanf("%d",&a);
	 b= a % 2;
	 if (b)
	 printf("����\n");
	 else
	 printf("ż��\n"); 
 	return 0;
 }
