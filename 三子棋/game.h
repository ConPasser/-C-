#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ROW 3
#define COL 3
//选择界面
void menu();

//数组初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下
void wanjiaxia(char board[ROW][COL], int row, int col);

//电脑下
void diannaoxia(char board[ROW][COL], int row, int col);

//玩家下
void wanjiaxia(char board[ROW][COL], int row, int col);

//电脑下
void diannaoxia(char board[ROW][COL], int row, int col);

//判断输赢
char yingorshu(char board[ROW][COL], int row, int col);

int shifoupigju(char board[ROW][COL], int row, int col);

void game();