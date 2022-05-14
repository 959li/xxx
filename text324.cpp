
#include<stdio.h>
//int main() {
//	printf("c:\text\text.c");
//	printf("\a");
//	return 0;
//}
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum = %d\n",sum);
}
