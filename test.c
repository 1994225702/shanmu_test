#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("*****     1.play     *****\n");
	printf("*****     0.exit     *****\n");
	printf("**************************\n");
}

void game()
{
	//�׵���Ϣ�Ĵ洢
	char mine[ROWS][COLS] = { 0 };//1.���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//2.�Ų�����׵���Ϣ
	InitBoard(mine, ROWS, COLS , '0');//��ʼ��
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);//��ӡ����
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);//����
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input;

	do 
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}



int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}