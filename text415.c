#include "game.h"

void eunm()
{
	printf("****************************\n");
	printf("********   1.play   ********\n");
	printf("********   0.exit   ********\n");
	printf("****************************\n");
}

void game() {
	
	char board[ROW] [COL];
	//初始化棋盘 空格
	Initboard(board, ROW, COL);
	//打印一下棋盘
	Displayboard(board, ROW, COL);
	char ret;
	while (1)
	{
		//玩家下棋
		Playmake(board,ROW,COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = Iswin(board, ROW, COL);	
		if (ret != 'c')
			break;
		//电脑下棋
		commake(board,ROW,COL);
		//打印棋盘
		Displayboard(board, ROW, COL);
		ret = Iswin(board , ROW ,COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		Displayboard(board, ROW, COL);

	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("平局\n");
		Displayboard(board, ROW, COL);
	}
}
int main(){
	srand((unsigned int)time(NULL));
	int i = 0;
	while (1)
	{
		eunm();
		printf("请选择> ");
		scanf("%d", &i);
		if (i == 1)
			game();
		else if(i==0){
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}


	}
	return 0;
}