#include<stdio.h>
#include<math.h>
//������ 
int main()
{
	int i;
	int t=0;
	for (i=1;i<=1000;i+=2)
	{
		int j =0;
		for(j=2;j<=sqrt(i);j++)//�Գ��� 
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
	printf("\n����%d������",t);
	return 0; 
}
