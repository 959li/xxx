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
//�жϴ�С�˴��棬СλС��ַС�˷�֮���
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
	printf("%d\n", x);//���4
	sys_adw();
	union Y
	{
		char s[5];
		int i;3
	}y;
	printf("%d\n", y);//���8 ��������4 ������5 ������8


	return 0;
}
//��������ǹ�ͬ��  �����������ı��������ڴ��С  �����ǹ���