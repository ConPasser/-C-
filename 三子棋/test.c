#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void game()
{
	char board[ROW][COL];
	//玩家下
	//电脑下

	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入:>\n");
			break;
		}
	} while (input);


	return 0;
}