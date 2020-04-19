#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*******     1.play    *******\n");
	printf("*******     0.exit    *******\n");
	printf("*****************************\n");
}

void game()
{

	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	//printf("\n");
	//DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	int i = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (i != 0)
			{
				system("cls");//清屏
			}
			game();
			i++;
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);

}

int main()
{
	test();
	return 0;
}