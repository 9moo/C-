#include<stdio.h> 

//����else 
 int main()
 {
 	int a = 0;
 	int b = 2;
 	if(a==1)
 	 	if(b==2)//��else��Ӧ��if 
 	 		printf("999\n");
 	 	else//else����ӽ���δƥ���ifƥ�� 
 	 		printf("666\n");
 //��else��ָ��if��ƥ��ķ���	 		
 	if(a==1)//��else��Ӧ��if
	 {
 		if(b==2)// 
 	 		printf("999\n");
	 }
 	 	
 	else
 	 	printf("666\n");
 	return 0;
 }
 
