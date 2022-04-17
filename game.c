
#include "game.h"
void Initboard(char board [ROW][COL], int row, int col)
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
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}
void Playmake(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走>\n");
	while (1)
	{
		printf("请输入下棋的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标被占用，请重新输入：");
		}
		else
		{
			printf("坐标错误，请重新输入：\n");
		}
	}
	
}
void commake(char board[ROW][COL], int row, int col)
{
	printf("电脑走>\n");
	
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
	

}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int y = 0;
	for(i=0;i<row;i++)
		for (y = 0; y < col; y++) 
		{
			if (board[i][y] == ' ')
			{
				return 0;
			}
		}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{

	int i = 0; 
	int y = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	int ret = Isfull(board, ROW, COL);
	if (ret == 1)
	{
		return 'q';
	}
	return 'c';
}