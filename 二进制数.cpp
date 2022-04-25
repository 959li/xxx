#include<stdio.h>
//int erjinzhi(int n)
//{
//	int count = 0;
//	for (int i = 0; i <= 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = erjinzhi(n);
//	printf("%d ", ret);
//	return 0;
//}

//上面只能用于整数下面的可以用于负数

int erjinzhi(int n)
{
	int count = 0;

	while (n)
	{
		n& (n - 1);
		count++;
		n = n & (n - 1);
	}
	return count;

}

int main()
{

	int n = 0;
	scanf_s("%d", &n);
	int ret = erjinzhi(n);
	printf("%d ", ret);
	return 0;
}