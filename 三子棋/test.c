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
	char board[ROW][COL] = { 0 };//������̵���Ϣ
	InitBoard(board, ROW, COL); //��ʼ������
	printBoard(board, ROW, COL);//��ӡ����
	//����
	char ret = 0;
	while (1)
	{
		//�����
		Playermove(board,ROW,COL);
		printBoard(board,ROW,COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		srand((unsigned int)time(NULL));//ʱ���ȷ��������ĳ�ʼֵ
		Computermove(board,ROW, COL);
		printBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	do
	{
		mune();
		printf("�����룺");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������!\n");
			continue;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}