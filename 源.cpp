#include<stdio.h>
int main() {

	int i = 0;
	int n = 1;
	int ret = 1;
	int wum = 0;
	while (n<=10)
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		n++;
		wum = wum + ret;
		ret = 1;

	}
	printf("%d", wum);
	printf("%d\n", ret);
	return 0;
}