#include<stdio.h>
int main()
{	int k=5 ;
	int i;
	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("�ҵ��ˣ��±��� %d\n",i);
			break;
		}
				
	}
	if (i==sz)
		printf("�Ҳ���\n");
	return 0;
 } 
