#include<stdio.h>


//int sys_adw()
//{
//	int i = 1;
//	if (*(char*)&i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	sys_adw();
//	return 0;
//}
//判断大小端储存，小位小地址小端反之大端
int sys_adw()
{
	union U
	{
		char c;
		int i;
	}u;
	return u.c;
}
int main()
{
	sys_adw();
	union X
	{
		char c;
		int i;
	}x;
	printf("%d\n", x);//输出4
	sys_adw();
	union Y
	{
		char s[5];
		int i;3
	}y;
	printf("%d\n", y);//输出8 最大对其数4 能容纳5 所以是8


	return 0;
}
//联合体就是共同体  按最大对其数的倍数决定内存大小  并且是公用