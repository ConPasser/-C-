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

//�����
void wanjiaxia(char board[ROW][COL], int row, int col)
{
	int i;
	int y;
	do
	{
		printf("������������ӵ����꣺>");
		scanf("%d %d", &i, &y);
		//�ж������Ƿ�Ϸ�
		if (i >= 1 && i <= row && y >= 1 && y <= col)
		{
			if (board[i - 1][y - 1] == ' ')
			{
				board[i - 1][y - 1] = '*';
				
				break;
			}
			else
			{
				printf("�ø����ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("������������������\n");
		}
	} while (1);
}

//������
void diannaoxia(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	do
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '@';
			
			break;
		}
	} while (1);




}

//�ж���Ӯ
char yingorshu(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0,j = 0; i < row; i++)
	{
		if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j] != ' ')
		{
			return board[i][j];
		}
	}
	for (i = 0, j = 0; i < row; i++)
	{
		if (board[j][i] == board[j + 1][i] && board[j + 1][i] == board[j + 2][i] && board[j][i] != ' ')
		{
			return board[j][i];
		}
	}
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		if (i = j)
	//		{
	//			int a = board[i][j];
	//		}

	//	}
	//}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	int num = shifoupigju(board,ROW,COL);
	if (num == 1)
	{
		return 'Q';
	}
	return 'C';
}

int shifoupigju(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

void game()
{
	char board[ROW][COL];

	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	////�����
	//wanjiaxia(board, ROW, COL);
	//DisplayBoard(board, ROW, COL);

	////������
	//diannaoxia(board, ROW, COL);
	//DisplayBoard(board, ROW, COL);
	char y = 0;
	do
	{
		//�����
		wanjiaxia(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ�ʤ��
		y = yingorshu(board, ROW, COL);
		if (y != 'C')
		{
			break;
		}
		//������
		diannaoxia(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		y = yingorshu(board, ROW, COL);
		if (y != 'C')
		{
			break;
		}
	} while (1);
	if (y == '*')
	{
		printf("------------���Ӯ��-------------\n");
	}
	else if (y == '@')
	{
		printf("------------����Ӯ��-------------\n");
	}
	else if (y == 'Q')
	{
		printf("--------------ƽ��---------------\n");

	}
	DisplayBoard(board, ROW, COL);
}