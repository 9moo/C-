#include<stdio.h>
//宏定义常量 
//#define huj 100
//int main(){
//	int a=huj;
//	printf("%d",a);
//	return 0;
//}


 //函数定义
 
 int Max(int x,int y)
 {
 	return x>y?x:y;
 }
	 
//宏的定义
#define MAX(X,Y) (X>Y?X:Y)

 int main()
 {
 	int a = 28;
 	int b = 46;
 	//函数
	 int max = Max(a,b);
	 printf("函数max = %d\n",max);
	 //宏的方式
	 max = MAX(a,b);
	 printf("宏max = %d\n",max); 
	 return 0;
 }
