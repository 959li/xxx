#include<stdio.h>
#include<math.h>

//int main()
//{
//
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//�ж�λ��
//		int n = 1;
//		int tmp = 1;
//		tmp = i;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//
//		//���ʽ�ӵ�ֵ����sum
//
//		int sum = 0;
//		tmp = i;
//		int j = 0;
//		while (tmp)
//		{
//			j = tmp % 10;
//			sum += pow(j, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//		//
//	}
//	return 0;
//}


//����a+aa+aaa+aaaa+...+n��a

int main()
{

	int a = 0;
	int n = 0;
	scanf_s("%d %d", &a, &n);
	int i = 1;
	int ret = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		ret = ret*10+a;
		sum += ret;
	}
	printf("%d\n", sum);




	return 0;

}