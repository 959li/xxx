#include<stdio.h>


//ƽ���������ҵ���������
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
 
 
//��ѧ����
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


//�ð�λ������ ��������õ�����������������  �ڶ�����ѧ����Ҳ���� �����ܳ���a+b���������
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