#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<limits.h>
#include <stdlib.h>//ststem
#include<string.h>//strcmp

int main()
{
	char input[20] = { 0 };//�洢����
	//system()-ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������롰����������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�ж��Ƿ��������ȷ
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}
