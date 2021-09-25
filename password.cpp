#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char password[20] = {0};
	for(i=0;i<3;i++){
		printf("请输入密码");
		scanf("%s",&password);
		if (strcmp(password,"123456") == 0)//strcmp比较字符串是否相同，相同输出0
		{	
			printf("登录成功\n");
			break;
		} 					 
		else{
			printf("密码错误\n");
		}
			
		
	}
	if(i==3)
	printf("三次输入均有误，退出程序\n");
return 0;
}
