#include<stdio.h>
//int main(){
//	 int ch = 0;
//	 while ((ch=getchar()) != EOF)//getchar�Ӽ��̻�ȡ�ַ� 
//	 {						//EOFΪ �ļ�������־ ctrl+z 
//	 	putchar(ch);//����ַ� 
//	 }
//	return 0;
//} 
int main(){
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("���������룺");
	scanf("%s",password);
	while((ch = getchar()) != '\n');
	{
		;//��whileȥȡ�߻�����������һֱȡ��\n 
	 } 
	printf("��ȷ�ϣ�Y/N��:");
	ret = getchar();
	if(ret =='Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;
}
