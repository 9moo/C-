#include<stdio.h> 

//switch���֧��� 
 int main()
 {
 	int day;
 	printf("����1 - 7\n"); 
 	scanf("%d",&day);
 	switch(day)//������Ϊ���ͱ��ʽ
	 {
	 	case 1://case�����Ϊ���ͳ��� 
		 	printf("����һ\n"); 
		 	break; //ֱ��ת������ 
		case 2:
		 	printf("���ڶ�\n");
			 break; 
		case 3:
		 	printf("������\n");
			 break; 
		case 4:
		 	printf("������\n");
			 break; 
		case 5:
		 	printf("������\n"); 
		 	break;
		case 6:
		 	printf("������\n"); 
		 	break;
		case 7:
		 	printf("������\n"); 
		 	break;
		 	default://Ĭ����� 
		 		printf("�������\n"); 
	  } 
	  switch(day)
	  {
	  	case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������\n");
			break;
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
	  }
 return 0;
 }
