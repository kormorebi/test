#define ROW 3
#define COL 3

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//声明
void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void printBoard(char board[ROW][COL], int row, int col);//打印棋盘

//下棋
void Playermove(char board[ROW][COL],int row,int col);//玩家走
void Computermove(char board[ROW][COL], int row, int col);//电脑走
//判断输赢
//*--玩家赢
//#--电脑赢
//C--继续
//Q--平局
char Iswin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);