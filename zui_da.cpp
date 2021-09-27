#include<stdio.h>
int main(){
	//数组找最大数
	int arr[]={1,3,5,-2,7,-9,-7,-4,8};
	int max = arr[0];
	int i;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=1;i<sz;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max = %d",max);
	return 0;
}
