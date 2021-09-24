#include<stdio.h> 


 int main(){
 	int i = 0;
 	while(i<=10){
		i++;
 		
	 	if(i==5)
 			//break;//跳出循环
			continue;//跳过本次循环后面的代码 
 		printf("%d ",i);
 		
 	
	 }
 	
 	return 0;
 }
