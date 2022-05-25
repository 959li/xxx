#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr( char* arr1,  char* arr2)
{
	assert(arr1 && arr2);
	char* s1 = arr1;
	char* s2 = arr2;
	char* cp = arr1;
	while (*cp)
	{
		s1 = cp;
		s2 = arr2;
		while(*s1&&*s2&&(*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;

		}
		cp++;
	}
	return NULL;
}

int main()
{

	char* arr1 = "awdwadwa";
	char* arr2 = "sadasdaw";
	char* ret = strstr(arr1, arr2);
	char* ret2 = my_strstr(arr1, arr2);
	if (ret2== NULL)
	{
		printf("meizhaofao");
	}
	else
	{
		printf("zhaodao");
	}
}