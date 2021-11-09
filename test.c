#include "game.h"


void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("     play———1    \n");
	printf("     exit———0    \n");
	printf("********************\n");
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}


}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("是否开始游戏>: ");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束请推出\n");
			break;
		default :
			printf("输入错误请重新输入\n");
			break;

		}
	} while (input);



}
int main()
{
	test();
	return 0;
}