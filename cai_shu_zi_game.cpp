//猜数字游戏
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
void game(){
	//1.生成随机数
	 int ret = 0;
	 int guess; 
	 ret = rand()%101;//rand生成随机数 
	//printf("%d\n",ret); 
	//2.猜数字 
	while(1)
	{
		printf("猜猜数字");
		scanf("%d",&guess);
		if(guess>ret){
			printf("猜大了\n");
		}
		else if(guess<ret){
			printf("猜小了\n");
		} 
	    else{
	    	printf("恭喜你！猜对了\n");
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
	srand((unsigned int) time(NULL));//用时间戳生成变化的数 
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
				game();//猜数字游戏
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	}while(input);
	return 0;
 } 
