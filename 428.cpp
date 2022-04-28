#include<stdio.h>
#include<string.h>

int main()
{

	//char a = 128;
	//printf("%u\n", a);

	//int i = -20;
	//unsigned int j = 10;
	////printf("%d\n",i+j);

	//unsigned int i;
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u\n", i);
	//}

	/*char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));*/


	int n = 9;
	float* pfloat = (float*)&n;
	printf("n : %d\n", n);
	printf("*pfioat: %f\n", *pfloat);
	*pfloat = 9.0;
	printf("n:%d\n", n);
	printf("*pfloat : %f\n", *pfloat);
	return 0;
}