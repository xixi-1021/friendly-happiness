
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;  
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
            
		}
		printf("\n");
	}
	
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count =  EASY_COUNT;
	while(count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand()% col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
// '1'-'0' =1        ASCLL码表中对应的数
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +                  //计算周围有几个0
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1'踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else //不是雷
			{
				//计算x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入非法坐标，请重新输入！\n");
		
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
	
}

























//#include "game.h"
//#pragma warning(disable : 4996)
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0;j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//
//}
//int IsFull(char board[ROW][COL], int row, int col)                                //三子棋游戏
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)       //三子棋游戏格子
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);  
//			if (j < col - 1)
//				printf("|");  
//		}
//		printf("\n");
//			if (i < row - 1)
//			{
//				for (j = 0; j < col; j++)
//				{
//					printf("---");
//					if (j < col - 1)
//						printf("|");
//				}
//			}
//			printf("\n");
//	}
//}
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走:>\n");
//	while (1)
//	{
//
//
//		printf("请输入要下的坐标:>");
//		scanf("%d%d", &x, &y);
//		//判断x，y坐标的合法性
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("该坐标被占用\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入！\n");
//		}
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("电脑走:>\n ");
//	while (1)
//	{
//
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y]== ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//	
//} 
//
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//横三行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//竖三列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
//		return board[1][1];
//	if (1 == IsFull(board, ROW, COL))
//	{
//		return'Q';
//	}
//	return'C';
//}