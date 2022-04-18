#include<stdio.h>


//平常方法：找第三个变量
//int main() 
//{
//
//	int i = 3;
//	int j = 5;
//	int x = 0;
//	printf("%d %d\n", i, j);
//	x = i;
//	i = j;
//	j = x;
//	printf("%d %d\n", i, j);
//	return 0;
//
//
//}
 
 
//数学方法
//int main()
//{
//
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//
//}


//用按位异或计算 （解决不用第三个变量交换数字  第二种数学方法也可行 但可能出现a+b溢出的现象）
int main() 
{

	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;
}