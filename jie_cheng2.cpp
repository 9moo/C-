#include<stdio.h>
//µİ¹éÇó½×³Ë 
int fac(int x)
{
	if(x<1)
	return 1;
	else
	return x*fac(x-1);
}

int main(){
	int a;
	scanf("%d",&a);
	int b = fac(a);
	printf("½×³ËÎª%d",b);
	return 0;
}
