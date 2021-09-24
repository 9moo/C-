#include<stdio.h> 

//悬空else 
 int main()
 {
 	int a = 0;
 	int b = 2;
 	if(a==1)
 	 	if(b==2)//与else对应的if 
 	 		printf("999\n");
 	 	else//else与最接近的未匹配的if匹配 
 	 		printf("666\n");
 //令else与指定if相匹配的方法	 		
 	if(a==1)//与else对应的if
	 {
 		if(b==2)// 
 	 		printf("999\n");
	 }
 	 	
 	else
 	 	printf("666\n");
 	return 0;
 }
 
