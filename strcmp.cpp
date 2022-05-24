 #include<stdio.h>
#include<string.h>
#include<assert.h>



int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{

		return 1;
	}
	if (*arr1 < *arr2)
	{

		return -1;
	}
}
int main()
{

	char* p = "abcdef";
	char* q = "abcdef";

	int ret = strcmp(p, q);
	int ret1 = my_strcmp(p, q);
	printf(" %d %d", ret, ret1);

}