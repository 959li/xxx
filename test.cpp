#include<stdio.h>

//int zdgbs(int i, int y)
//{
//	int l = y;
//	while (l % i != 0)
//	{
//		l += y;
//	}
//	return l;
//}
//
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	printf("����Ҫ����󹫱�������������");
//	scanf_s("%d %d", &a, &b);
//	int ret = zdgbs(a, b);
//	printf("%d\n", ret);
//}

//����������󹫱���



//�û����鵥��˳�� �� l like henan.  ��Ϊ henan. like l

#include<string.h>

void reverse(char* left, char* right)
{
	while (left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = * right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{

	char arr[100] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		if (*end == ' ')
		{
			reverse(start, end - 1);
			start = end + 1;
		}
			
		else
		{
			reverse(start, end - 1);
			start = end;
		}
	}

	printf("%s", arr);
	return 0;
}