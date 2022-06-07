#include<stdio.h>
#include<assert.h>

int strStr(char* haystack, char* needle)
{
	assert(haystack && needle);
	char* ret = needle;
	char* ser = haystack+1;
	int i = 0;
	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
			{
				needle = ret;
				break;
			}
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return i;
		}
		haystack = ser;
		ser++;
		i++;
	}
	return 0;
}

int main()
{
	char arr1[] = "aaaaa";
	char arr2[] = "aab";
	int i = strStr(arr1, arr2);
	printf("%d", i);

}