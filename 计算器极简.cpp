#include<stdio.h>


int jia(int x, int y)
{
	return (x + y);
}


int jian(int x, int y)
{
	return (x - y);
}


int cheng(int x, int y)
{
	return (x * y);
}


int chu(int x, int y)
{
	return (x / y);
}

void menu()
{
	printf("*****************************\n");
	printf("****** 1���ӷ�  2������ ******\n");
	printf("****** 3���˷�  4������ ******\n");
	printf("*******   0���˳�����   ******\n");
	printf("*****************************\n");

}

int main()
{
	int input = 0;
	
	do
	{
		
		int x = 0;
		int y = 0;
		menu();
		int ret = 0;
		printf("������ָ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("�������������");
			scanf_s("%d %d", &x, &y);
			ret=jia(x,y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("�������������");
			scanf_s("%d %d", &x, &y);
			ret = jian(x,y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("�������������");
			scanf_s("%d %d", &x, &y);
			ret = cheng(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("�������������");
			scanf_s("%d %d", &x, &y);
			ret = chu(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�����");
			break;
		default:
			printf("����������������룺/n");
			break;
		}
	} while (input);
	return 0;
}