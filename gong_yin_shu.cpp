#include<stdio.h>
//��������� 
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(c=a%b){			//շת����� 
		a=b;
		b=c;
	}
	printf("%d",b);
	return 0;
} 
