#include<stdio.h> 


 int main()
{
	int age = 0;
	printf("请输入年龄");
	scanf("%d",&age);
	if (age < 18)
	{ 
	//if执行多条语句时用{}形成代码块 
		printf("未成年\n");
		printf("防沉迷\n"); 
	}
	 
	else if(age>=18 && age<28)
		printf("青年\n");
	else if(age>=28 && age<50)
		printf("中年\n");
	else
		printf("老年"); 
	return 0;
}

//if语句可嵌套 
//int main()
//{
//	int age = 0;
//	printf("请输入年龄");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("未成年\n");
//	else{
//	if(age>=18 && age<28)
//	printf("青年\n");
//	else if(age>=28 && age<50)
//	printf("中年\n");
//	else
//	printf("老年"); 
//	}
//	return 0;
//}
