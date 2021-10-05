#include<stdio.h>
int er_fen(int k,int arr[],int sz)
{
	int left = 0;
	int right = sz-1;
	while(left<=right)
	{
	int mid =(left+right)/2;
	if(k>arr[mid])
		left=mid+1;
	else if(k<arr[mid])
		right=mid-1;
	else
		return mid;
	}
	return -1;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int k;
	int sz=sizeof(arr)/sizeof(arr[0]);
	scanf("%d",&k);
	if(er_fen(k,arr,sz)==-1)
	printf("没找到");
	else
	printf("找到了下标是%d",er_fen(k,arr,sz)) ;
	
	return 0;
}
