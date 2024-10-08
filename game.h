

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10
#include <stdlib.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);//传过来的数组是什么就用那个接

void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
 












//#define ROW 3
//#define COL 3
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row, int col);
//void PlayerMove(char board[ROW][COL], int row, int col);
//void ComputerMove(char board[ROW][COL], int row, int col);
//char IsWin(char board[ROW][COL], int row, int col);