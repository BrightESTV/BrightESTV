#include "game.h"
int isfull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}
void Initboard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }

}
void Displayboard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ",board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
           
        }
    }
   
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x, y;
    printf("玩家走\n");
    printf("请输入坐标>:  ");
    scanf_s("%d%d", &x, &y);
    while (1)
    {
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("该位置已有点");
            }
        }
        else
        {
            printf("坐标不符合条件，请重新输入");
        }
    }

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("电脑走\n");
    x = rand() % row;
    y = rand() % col;
    while(1)
    {
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
        
    }
   
}
char iswin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
        {
            return board[i][0];
        }
        
    }
    for (i = 0; i < col; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
        {
            return board[0][i];
        }
    }
    if (board[0][0] == board[1][1] && board[2][2] == board[0][0] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
    {
        return board[2][0];
    }
    if (1 == isfull(board, ROW, COL))
    {
        return 'Q';
    }
    return 'C';
}
