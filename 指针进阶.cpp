#include<stdio.h>

//int main()
//{
//
//
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";
//	char* str4 = "hello bit";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 andd str4 are not same\n");
//	}
//	return 0;
//}
//�ַ�����ǰ�治ͬh�ĵ�ַ  ָ�����ȷ����ʼ����hello bit �ǲ��ܸ��ĵ� ��������������ͬһ��hello bit ������


//
//int main()
//{
//
//	char* ps = "hello bit";
//	char arr[] = "hrllo bit";
//	printf("%c\n", *ps);
//	printf("%s\n", ps);
//	return 0;
//}

//int main()
//{
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 1,2,3,4,5 };
//	int c[] = { 1,2,3,4,5 };
//	int* arr[3] = { a,b,c };//ָ������  int (*arr)[3] ������ָ�� 
//	for (int i = 0; i <= 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//printf("%d ,*(arr[i][j]));�����
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

 
//int main()
//{
//
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", p1);
//	printf("%p\n", p2);
//	printf("%p\n",p1+1);//��һ�������ĸ��ֽ�  
//	printf("%p\n", p2+1);//��һ������һ������
//}


//int main()
//{
//
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//	return 0;
//}

void print(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}

void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j= 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;



}