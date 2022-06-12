#include<stdio.h>
#include<string.h>
//for (j = i + 1; j < strlen(s); j += 2)
bool isbol(char* s)
{
	if (strlen(s) % 2 == 1)
		return false;
	int i = 0;
	int j = i;
	for (i = 0; i < strlen(s); i++)
	{
		
		if (s[i] == '(')
		{
			j = i+1;
			while (s[j] != ')' && j<strlen(s))
			{
				j += 2;
			
			}
			if (j>=strlen(s))
				return false;
		}

		if (s[i] == '{')
		{
			j = i+1;
			while (s[j] != '}' && j < strlen(s))
			{
				j += 2;

			}
			if (j >= strlen(s))
				return false;
		}
		if (s[i] == '[')
		{
			j = i+1;
			while (s[j] != ']' && j < strlen(s))
			{
				j += 2;

			}
			if (j >= strlen(s))
				return false;
		}
		if (s[i] == ')')
		{
			j = i-1;
			while (s[j] != '(' && j >= 0)
			{
				j -= 2;

			}
			if (j<0)
				return false;
		}
		if (s[i] == '}')
		{
			j = i - 1;
			while (s[j] != '{' && j >= 0)
			{
				j -= 2;

			}
			if (j < 0)
				return false;
		}
		if (s[i] == ']')
		{
			j = i - 1;
			while (s[j] != '[' && j >= 0)
			{
				j -= 2;

			}
			if (j < 0)
				return false;
		}
	}
	return true;
}

int main()
{
	char* s = "[({])}";
	printf("%d ",isbol(s));

}