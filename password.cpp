#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char password[20] = {0};
	for(i=0;i<3;i++){
		printf("����������");
		scanf("%s",&password);
		if (strcmp(password,"123456") == 0)//strcmp�Ƚ��ַ����Ƿ���ͬ����ͬ���0
		{	
			printf("��¼�ɹ�\n");
			break;
		} 					 
		else{
			printf("�������\n");
		}
			
		
	}
	if(i==3)
	printf("��������������˳�����\n");
return 0;
}