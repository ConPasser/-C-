#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ROW 3
#define COL 3
//ѡ�����
void menu();

//�����ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�����
void wanjiaxia(char board[ROW][COL], int row, int col);

//������
void diannaoxia(char board[ROW][COL], int row, int col);

//�����
void wanjiaxia(char board[ROW][COL], int row, int col);

//������
void diannaoxia(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char yingorshu(char board[ROW][COL], int row, int col);

int shifoupigju(char board[ROW][COL], int row, int col);

void game();