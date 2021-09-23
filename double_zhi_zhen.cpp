#include<stdio.h>
int main()
{
	double pi =3.14;
	double *bp = &pi;
	printf("%lf\n",pi);//∏°µ„–Õ”√lf 
	*bp = 3.14159;
	printf("%lf\n",pi);
	printf("%d\n",sizeof(bp));
	
	return 0;
}
