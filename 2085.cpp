#include<stdio.h>
#include<string.h>


int bijiao(const char* s1, const char* s2[], int sz2)
{
	int i = 0;
	int q = 0;
	for (i = 0; i < sz2; i++)
	{
		if (strcmp(s1, s2[i]) == 0)
		{
			q++;
		}

	}
	return q;
}
int chazhao(const char* s1[], int i, int sz)
{
	int j = 0;
	int count = 0;
	for (j = 0; j < sz; j++)
	{
		if (s1[i] == s1[j])
			count++;
	}
	return count;
}
int countword(const char* s1[], int sz1, const char* s2[], int sz2)
{
	int i = 0;
	int z = 0;

	for (i = 0; i < sz1; i++)
	{

		if (chazhao(s1, i, sz1) == 1)
		{
			if (bijiao(s1[i], s2, sz2) == 1)
			{
				z++;
			}
		}



	}
	return z;
}

int main()
{

	const char* s1[5] = { 0 };
	s1[0] = "b";
	s1[1] = "bb";
	s1[2] = "amazingb";
	s1[3] = "as";
	s1[4] = "is";
	int sz1 = sizeof(s1) / sizeof(s1[0]);
	const char* s2[2] = { 0 };
	s2[0] = "a";
	s2[1] = "i";
	int sz2 = sizeof(s2) / sizeof(s2[0]);
	int ans = countword(s1, sz1, s2, sz2);
	printf("%d ", ans);

}
