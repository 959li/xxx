#include<stdio.h>
#include<assert.h>

char*my_strcat(char* arr1, char* arr2)
{
	char* ted = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	int dest = 0;
	while (*(arr1+dest))  
	{
		dest++;
	}
	while (*(arr1 + dest) = *arr2)
	{
		arr1++;
		arr2++;
	}
	return ted;
}
int my_strlen(char* arr)
{
	int dest = 0;
	while (*(arr+dest))
	{
		dest++;

	}
	return dest;
}
int main()
{

	char arr[20] = "hello ";
	char arr1[] = "world";
	int len = my_strlen(arr);
	char* ted = my_strcat(arr, arr1);

	;
	printf("%d\n", len);
	printf("%s", ted);
}