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
	//��ʼ������ �ո�
	Initboard(board, ROW, COL);
	//��ӡһ������
	Displayboard(board, ROW, COL);
	char ret;
	while (1)
	{
		//�������
		Playmake(board,ROW,COL);
		//��ӡ����
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);	
		if (ret != 'c')
			break;
		//��������
		commake(board,ROW,COL);
		//��ӡ����
		Displayboard(board, ROW, COL);
		ret = Iswin(board , ROW ,COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		Displayboard(board, ROW, COL);

	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		Displayboard(board, ROW, COL);
	}
	else
	{
		printf("ƽ��\n");
		Displayboard(board, ROW, COL);
	}
}
int main(){
	srand((unsigned int)time(NULL));
	int i = 0;
	while (1)
	{
		eunm();
		printf("��ѡ��> ");
		scanf("%d", &i);
		if (i == 1)
			game();
		else if(i==0){
			printf("�˳���Ϸ\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}


	}
	return 0;
}