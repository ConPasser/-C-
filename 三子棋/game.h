#include <stdio.h>

#define ROW 3
#define COL 3
//选择界面
void menu();
//数组初始化
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);