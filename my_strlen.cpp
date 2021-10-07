#include<stdio.h>
#include<string.h>

//int my_strlen(char* str)
//{
//	int i=0;
//	while(*str!='\0')
//	{
//		i++;
//		str++;
//	}
//	return i;
//} 

//不创建临时变量的方法   递归 
int my_strlen(char* str)
{
	if(*str!='\0')
	return 1+my_strlen(str+1);
	else
	return 0; 
}

int main(){
	char arr[]="jak";
	int len = my_strlen(arr);
	printf("len=%d",len);
	return 0;
}
