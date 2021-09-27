#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	char input[20] ={0};
	system("shutdown -s -t 60");
	again:
	printf("请注意你的电脑将在1分种内关机，请输入‘我是猪’取消关机\n请输入："); 
	scanf("%s",&input);
	if(strcmp(input,"我是猪")==0)// scrtmp比较字符串是否相同 
	{
		system("shutdown -a"); 
		printf("已取消关机"); 
	}
	else{
		goto again;
	}
	return 0;
}
