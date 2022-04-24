#include<stdio.h>

size_t my_strlen(char* arr)
{
	while (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	return 0;
}