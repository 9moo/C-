//��������Ϸ
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
void game(){
	//1.���������
	 int ret = 0;
	 int guess; 
	 ret = rand()%101;//rand��������� 
	//printf("%d\n",ret); 
	//2.������ 
	while(1)
	{
		printf("�²�����");
		scanf("%d",&guess);
		if(guess>ret){
			printf("�´���\n");
		}
		else if(guess<ret){
			printf("��С��\n");
		} 
	    else{
	    	printf("��ϲ�㣡�¶���\n");
	    	break; 
		}
	}
}
void menu(){
printf("******************************\n");
printf("******  1.play  0.exit  ******\n");
printf("******************************\n");
}
int main()
{
	int input;
	srand((unsigned int) time(NULL));//��ʱ������ɱ仯���� 
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				game();//��������Ϸ
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	}while(input);
	return 0;
 } 
