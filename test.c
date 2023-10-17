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
	//雷的信息的存储
	char mine[ROWS][COLS] = { 0 };//1.布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//2.排查出的雷的信息
	InitBoard(mine, ROWS, COLS , '0');//初始化
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);//打印棋盘
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);//布雷
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input;

	do 
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
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