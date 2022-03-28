#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//ѡ�����
void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("*********   1.play     ******\n");
	printf("*********   0.exit     ******\n");
	printf("*****************************\n");
	printf("*****************************\n");
}
//��ʼ������
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
//��ӡ����
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