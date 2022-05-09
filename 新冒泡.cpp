#include<stdio.h>

void maopao( int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,4,5,6,1,2,3 };
	int  sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, sz);
	print(arr, sz);
}