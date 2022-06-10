#include<stdio.h>
int ifhuiwen(char* arr[], int sz)
{
	int i = 0;
	while (i < sz)
	{
		if (*arr[i] != *arr[sz])
		{
			return 0;
		}
		i++;
		sz--;
	}
	return 1;
}
char* longest(char* s[])
{
	char* ret[] = { 0 };
	int i = 0;
	int k = 0;
	while (*s[k])
	{
		k++;
	}
	int j = 0;
	
	while (*s[i])
	{
		j = k;
		while (i < j)
		{
			if ((ifhuiwen(s[i], j - i - 1) == 1))
			{
				for (int w = 0; w <= j - i - 1; w++)
				{
					*ret[w] = *s[i+w];
				}
				return ret;
			}
			j--;
		}
		i++;
	}
	return ret;

}


int main()
{
	char s = "absdc";
	char* s1[] = longest(s);
}
