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
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	//printf("\n");
	//DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�Ų���
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			if (i != 0)
			{
				system("cls");//����
			}
			game();
			i++;
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}
	} while (input);

}

int main()
{
	test();
	return 0;
}