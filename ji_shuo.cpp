#include<stdio.h> 


 int main()
 {
 	int a,b;
 	int i = 1;
 	while(i<=100)//打印1-100的奇数 
	 {
	 if (i%2==1)
	 	printf("%d  ",i);
	 i++;
	 }
	 //判断一个数的奇偶 
	 printf("\n请输入一个数\n"); 
	 scanf("%d",&a);
	 b= a % 2;
	 if (b)
	 printf("奇数\n");
	 else
	 printf("偶数\n"); 
 	return 0;
 }
