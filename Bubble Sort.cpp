#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//ȷ������
	int i;
	
	for (i = 0; i < sz - 1; i++)
	{	int flag = 1;//��������
		int j;
		
		for (j = 0; j < sz - 1 - i; j++) //ÿһ��ð������
		{	
			if (arr[j]>arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����δ��ȫ����
			}

		}
		if(flag==1)
			break; 
	}

}
int main() {
	int arr[] = { 9,4,5,7,2,3,1,10,8,6 };
	//����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//ð��������
	for (i = 0; i < 10; i++)//��ӡ
		printf("%d ", arr[i]);
	return 0;
}