#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums ,int numSize, int target,int *returnSize)
{
	*returnSize = 2;
	int* result = NULL;
	int i = 0;
	int j = 0;
	for (i = 0; i < numSize; i++)
	{
		for (j = i+1; j < numSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				result = (int*)malloc(sizeof(int) * 2);
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}

}
void print(int* arr[], int i)
{
	for (int j = 0; j < i; j++)
	{
		printf("%d ", arr[j]);
	}
}
int main()
{
	int arr1[4] = { 2,7,11,5 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("%d\n", sz);
	int x = 9;
	int arr2[] = { 0 };
	int* arr3 =NULL;
	arr3 = twoSum(arr1, sz, x,arr2);
	printf("%d ", arr3[0]);
	printf("%d ", arr3[1]);
	
	/*int sz2 = sizeof(arr3) / sizeof(arr3[0]);
	printf("%d\n", sz2);
	print(arr3, sz2);*/
}