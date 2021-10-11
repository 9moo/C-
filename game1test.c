//测试三子棋
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char ret = 0;
	//数组存放棋盘
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
		printf("玩家赢\n");
	else if (ret == 'O')
		printf("电脑赢\n");
	else
		printf("平局\n");


}
void menu() {
	printf("*********************\n");
	printf("*** 1.play  0.exit***\n");
	printf("*********************\n");
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		default:
			printf("输入有误\n");
			break;
		}

	} while (input);
}
int main(){
	test();
	return 0;
}