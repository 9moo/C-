#include<stdio.h>
//������ 
int main(){
	 int year;
	 int count = 0;
	 for(year=1000;year<=2021;year++)
	 {
	 	if(year%4==0&&year%100!=0)
		 {
		 	printf("%d ",year);
		 	count++;
		 }
	 	
	 	else if(year%400==0)
	 		{
			 printf("%d ",year);
			 count++;
			 }
			 
	 } 	
	 printf("\n����%d������",count);
	 return 0;
}
