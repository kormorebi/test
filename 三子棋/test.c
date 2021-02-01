#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"
void mune()
{
	printf("*****************************\n");
	printf("******1.play    0.exit*******\n");
	printf("*****************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };//存放棋盘的信息
	InitBoard(board, ROW, COL); //初始化棋盘
	printBoard(board, ROW, COL);//打印棋盘
	//下棋
	char ret = 0;
	while (1)
	{
		//玩家走
		Playermove(board,ROW,COL);
		printBoard(board,ROW,COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走
		srand((unsigned int)time(NULL));//时间戳确定随机数的初始值
		Computermove(board,ROW, COL);
		printBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
void test()
{
	int input = 0;
	do
	{
		mune();
		printf("请输入：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入!\n");
			continue;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}