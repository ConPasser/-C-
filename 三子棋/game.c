#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//选择界面
void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("*********   1.play     ******\n");
	printf("*********   0.exit     ******\n");
	printf("*****************************\n");
	printf("*****************************\n");
}
//初始化数组
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col-1)
				printf("|");

		}
		printf("\n");
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col-1)
					printf("|");
			}
		}
		printf("\n");
	}
}
//