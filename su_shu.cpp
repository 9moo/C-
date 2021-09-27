#include<stdio.h>
#include<math.h>
//找质数 
int main()
{
	int i;
	int t=0;
	for (i=1;i<=1000;i+=2)
	{
		int j =0;
		for(j=2;j<=sqrt(i);j++)//试除法 
		{
			if(i%j==0)
			{
				break;
			}	
		}
	if(j>sqrt(i)){
		printf("%d ",i);
		t++;
    }
	}
	printf("\n共有%d个素数",t);
	return 0; 
}
