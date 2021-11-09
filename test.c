#include "game.h"


void menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("     play������1    \n");
	printf("     exit������0    \n");
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}


}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�Ƿ�ʼ��Ϸ>: ");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�������Ƴ�\n");
			break;
		default :
			printf("�����������������\n");
			break;

		}
	} while (input);



}
int main()
{
	test();
	return 0;
}