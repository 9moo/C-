#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int k;
printf("Ҫ�ҵ���");
scanf("%d",&k); 
int sz = sizeof(arr)/sizeof(arr[0]);
int left = 0;//���±�
int right = sz-1;//���±�

while(left<=right){
	int mid = (left+right)/2;
	if(arr[mid] > k){
		right = mid -1;
	}
	else if(arr[mid] < k){
		left = mid +1;
	}
	else{
		printf("�±���%d\n",mid);
		break; 
	}
}
if(left>right)
printf("�Ҳ���"); 
	return 0; 
}
