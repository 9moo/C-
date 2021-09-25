#include<stdio.h>
//int main(){
//	 int ch = 0;
//	 while ((ch=getchar()) != EOF)//getchar从键盘获取字符 
//	 {						//EOF为 文件结束标志 ctrl+z 
//	 	putchar(ch);//输出字符 
//	 }
//	return 0;
//} 
int main(){
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("请输入密码：");
	scanf("%s",password);
	while((ch = getchar()) != '\n');
	{
		;//用while去取走缓冲区的数据一直取到\n 
	 } 
	printf("请确认（Y/N）:");
	ret = getchar();
	if(ret =='Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
	return 0;
}
