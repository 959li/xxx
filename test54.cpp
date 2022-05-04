#include<stdio.h>


//菱形*号
//int main()
//{
//
//
//	int line = 7;
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * line - 3 - 2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//一瓶水1元 两个空瓶换一瓶 
//int main()
//{
//
//    int money;
//	scanf_s("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty/2!=0)
//	{
//		total += empty/2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}



//奇数放前偶数放后
//void move(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//
//	while (i<=j)
//	{
//		while ((arr[i] % 2 != 0)&&(i<=j))
//		{
//			i++;
//		}
//		while (arr[j] % 2 != 1 && (i <= j))
//		{
//			j--;
//		}
//		if (i <= j)
//		{
//			int tmp = 0;
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//		
//	}
//}
//
//
//
//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//杨辉三角
//int main()
//{
//
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//

//int main()
//{
//
//	char A = 'A';
//	for (A = 'A'; A <= 'D'; A++)
//	{
//		if (((A != 'A') + (A == 'C') + (A == 'D') + (A != 'D')) == 3)
//			printf("%c", A);
//	}
//	return 0;
//}
//110集习题

int main()
{
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c =1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) && ((e == 4) + (a == 1) == 1))&&a*b*c*d*e==120)
							printf("%d %d %d %d %d\n",a, b, c, d, e);
						
					
						 
						

					}
				}
			}
		}
	}
	return 0;
}
//111集习题



