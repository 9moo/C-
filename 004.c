#include <stdio.h>
#include <stdlib.h>



int main()
{
	int  a = 10; 
	int arr[] = {1,2,3,4,5,6};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof a);
	printf("%d\n",sizeof(int));
	//printf("%d\n",sizeof int);err
	printf("%d\n",sizeof(arr));
	return 0;
}

