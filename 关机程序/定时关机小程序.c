#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<limits.h>
#include <stdlib.h>//ststem
#include<string.h>//strcmp

int main()
{
	char input[20] = { 0 };//存储数据
	//system()-专门用来执行系统命令的
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入“我是猪”，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//判断是否输入的正确
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
