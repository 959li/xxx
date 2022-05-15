#include<stdio.h>
//int main() {
//
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	*pa = 100;
//	printf("%d\n", a);
//	return 0;
//}
//int main() 
//{
//
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	
//	return 0;
//}
//int max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//	{
//		return b;
//	}
//}
//int main() {
//
//	int c = max(2, 3);
//	printf("%d\n", c);
//
//	return 0;
//
//}
int main() {
	int j = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {

		}
		else
		{
			printf("%d\n", i);
			j++;
		}
	}
	printf("%d\n", j);

	return 0;
}