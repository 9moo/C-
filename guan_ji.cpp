#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
	char input[20] ={0};
	system("shutdown -s -t 60");
	again:
	printf("��ע����ĵ��Խ���1�����ڹػ��������롮������ȡ���ػ�\n�����룺"); 
	scanf("%s",&input);
	if(strcmp(input,"������")==0)// scrtmp�Ƚ��ַ����Ƿ���ͬ 
	{
		system("shutdown -a"); 
		printf("��ȡ���ػ�"); 
	}
	else{
		goto again;
	}
	return 0;
}
