#include<stdio.h>

int rec(int* arr, int sz)
{
	int dest = 0;
	int fas = sz;
	while (dest < fas)
	{
		if (arr[dest] != arr[fas])
		{
			return 0;
		}
		dest++;
		fas--;
	}
	return 1;
}


bool  isPalindoe(int x)
{
	int arr[100] = { 0 };
	int i = 0;
	while (x)
	{
		arr[i] = x % 10;
		i++;
		x = x / 10;
	}
	if (rec(arr, i - 1) == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int x = 121;
	printf("%d ", isPalindoe(x));
	/*int c = isPalindoe(x);*/
	/*int arr[100] = { 1,2,1 };
	int sz = rec(arr, 3);*/
}