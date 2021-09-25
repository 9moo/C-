#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abcdefghijklmnopqrstuvwxyz";
	char arr2[26] = {0};
	int left = 0;
	int right = strlen(arr1)-1;//strlen计算字符串字符数不包涵\0
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	 } 
	 printf("%s\n",arr2);
	return 0;
	
}
