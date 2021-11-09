#define ROW 3
#define COL 3
#include <time.h>
#include <stdlib.h>


#include <stdio.h>
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL],int row ,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);