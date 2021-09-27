#include<stdio.h>
//找最大公因数 
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(c=a%b){			//辗转相除法 
		a=b;
		b=c;
	}
	printf("%d",b);
	return 0;
} 
