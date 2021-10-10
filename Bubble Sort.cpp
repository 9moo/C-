#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//确定趟数
	int i;
	
	for (i = 0; i < sz - 1; i++)
	{	int flag = 1;//假设有序
		int j;
		
		for (j = 0; j < sz - 1 - i; j++) //每一趟冒泡排序
		{	
			if (arr[j]>arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟未完全有序
			}

		}
		if(flag==1)
			break; 
	}

}
int main() {
	int arr[] = { 9,4,5,7,2,3,1,10,8,6 };
	//升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//冒泡排序函数
	for (i = 0; i < 10; i++)//打印
		printf("%d ", arr[i]);
	return 0;
}