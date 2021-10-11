#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{	
	int i = 0;
	
	for (i = 0; i < row; i++)
	{	int j = 0;
		//1.打印数据行
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//避免打印最后一列
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			for (j = 0;j < col; j++)
			{
				printf("---");
				if(j<col-1)//避免打印最后一行
				printf("+");
			}
			printf("\n");
		}
		
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{

	int x, y;
	printf("玩家回合");
	while (1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("该坐标已占有\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("计算机回合\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
			

	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) 
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘未满
			}
				
				
		}
			
	}
	return 1;//棋盘已满
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i=0;
	//横三行
	for(i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//两条对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
		return board[1][1];
	if (1 == IsFull(board, ROW, COL)) 
	{
		return 'Q';
	}
		return 'C';
}