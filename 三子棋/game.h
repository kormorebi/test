#define ROW 3
#define COL 3

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//����
void InitBoard(char board[ROW][COL], int row, int col);//��ʼ������
void printBoard(char board[ROW][COL], int row, int col);//��ӡ����

//����
void Playermove(char board[ROW][COL],int row,int col);//�����
void Computermove(char board[ROW][COL], int row, int col);//������
//�ж���Ӯ
//*--���Ӯ
//#--����Ӯ
//C--����
//Q--ƽ��
char Iswin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);