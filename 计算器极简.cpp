#include<stdio.h>


//int jia(int x, int y)
//{
//	return (x + y);
//}
//
//
//int jian(int x, int y)
//{
//	return (x - y);
//}
//
//
//int cheng(int x, int y)
//{
//	return (x * y);
//}
//
//
//int chu(int x, int y)
//{
//	return (x / y);
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****** 1���ӷ�  2������ ******\n");
//	printf("****** 3���˷�  4������ ******\n");
//	printf("*******   0���˳�����   ******\n");
//	printf("*****************************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		
//		int x = 0;
//		int y = 0;
//		menu();
//		int ret = 0;
//		printf("������ָ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�������������");
//			scanf_s("%d %d", &x, &y);
//			ret=jia(x,y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("�������������");
//			scanf_s("%d %d", &x, &y);
//			ret = jian(x,y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("�������������");
//			scanf_s("%d %d", &x, &y);
//			ret = cheng(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("�������������");
//			scanf_s("%d %d", &x, &y);
//			ret = chu(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����");
//			break;
//		default:
//			printf("����������������룺/n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////���ûص����� ����ͬ�����ŵ�calc������  �β��ǼӼ��˳��ĺ���ָ��
//int jia(int x, int y)
//{
//	return (x + y);
//}
//
//
//int jian(int x, int y)
//{
//	return (x - y);
//}
//
//
//int cheng(int x, int y)
//{
//	return (x * y);
//}
//
//
//int chu(int x, int y)
//{
//	return (x / y);
//}
//
//int calc(int(*pl)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("�������������");
//	scanf_s("%d %d", &x, &y);
//	
//	return pl(x, y);
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****** 1���ӷ�  2������ ******\n");
//	printf("****** 3���˷�  4������ ******\n");
//	printf("*******   0���˳�����   ******\n");
//	printf("*****************************\n");
//
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		
//		menu();
//		int ret = 0;
//		printf("������ָ��>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", calc(jia));
//			break;
//		case 2:
//			printf("%d\n", calc(jian));
//			break;
//		case 3:
//			printf("%d\n", calc(cheng));
//			break;
//		case 4:
//			printf("%d\n", calc(chu));
//			break;
//		case 0:
//			printf("�˳�����");
//			break;
//		default:
//			printf("����������������룺/n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



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
		int (*Pfrr[5])(int, int) = { NULL,jia,jian,cheng,chu };
		int x = 0;
		int y = 0;
		menu();
		int ret = 0;
		printf("������ָ��>");
		scanf_s("%d", &input);
		if (input > 0 && input <= 4)
		{

			printf("�������������");
			scanf_s("%d %d", &x, &y);
			int ret = Pfrr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
		while (input);
	return 0;
}