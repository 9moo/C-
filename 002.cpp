#include<string.h> 
#include<stdio.h> 
int main()
{
int a=0;
//printf("抽卡");
//while(a<100000)
//{
//	printf("未出%d",a);
//	a++;
// } 
// if(a>=100000)
// printf("出货\n");
printf("选择你的人物\n");
printf("1.哪吒 2.孙悟空\n");
	scanf("%d",&a);//scanf 从键盘获取数据通过指针赋值给a
	if(a==1)//if语句的简单格式
	printf("混天绫\n");
	else
	printf("金箍棒\n");
	return 0;
}
