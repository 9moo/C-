#include<stdio.h> 


 int main()
{
	int age = 0;
	printf("����������");
	scanf("%d",&age);
	if (age < 18)
	{ 
	//ifִ�ж������ʱ��{}�γɴ���� 
		printf("δ����\n");
		printf("������\n"); 
	}
	 
	else if(age>=18 && age<28)
		printf("����\n");
	else if(age>=28 && age<50)
		printf("����\n");
	else
		printf("����"); 
	return 0;
}

//if����Ƕ�� 
//int main()
//{
//	int age = 0;
//	printf("����������");
//	scanf("%d",&age);
//	if (age < 18)
//		printf("δ����\n");
//	else{
//	if(age>=18 && age<28)
//	printf("����\n");
//	else if(age>=28 && age<50)
//	printf("����\n");
//	else
//	printf("����"); 
//	}
//	return 0;
//}
