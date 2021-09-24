#include<stdio.h> 

//switch多分支语句 
 int main()
 {
 	int day;
 	printf("输入1 - 7\n"); 
 	scanf("%d",&day);
 	switch(day)//（）内为整型表达式
	 {
	 	case 1://case后必须为整型常量 
		 	printf("星期一\n"); 
		 	break; //直接转到出口 
		case 2:
		 	printf("星期二\n");
			 break; 
		case 3:
		 	printf("星期三\n");
			 break; 
		case 4:
		 	printf("星期四\n");
			 break; 
		case 5:
		 	printf("星期五\n"); 
		 	break;
		case 6:
		 	printf("星期六\n"); 
		 	break;
		case 7:
		 	printf("星期天\n"); 
		 	break;
		 	default://默认输出 
		 		printf("输入错误\n"); 
	  } 
	  switch(day)
	  {
	  	case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
	  }
 return 0;
 }
