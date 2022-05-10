//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//		int a[] = { 1,2,3,4 };
//		printf("%d\n", sizeof(a));
//		printf("%d\n", sizeof(a + 0));//第一个元素的地址
//		printf("%d\n", sizeof(*a));//第一个元素的大小
//		printf("%d\n", sizeof(a + 1));//第二个地址的大小
//		printf("%d\n", sizeof(a[1]));//第二个元素的大小
//
//
//		printf("%d\n", sizeof(&a));//&a是数组的地址 但是也是地址
//		printf("%d\n", sizeof(*&a));//计算数组的大小
//		printf("%d\n", sizeof(&a + 1));//数字后面地址的空间
//		printf("%d\n", sizeof(&a[0]));
//		printf("%d\n", sizeof(&a[0] + 1));
//
//
//
//		char arr[] = { 'a','b','c','d','e','f' };
//		printf("%d\n", sizeof(arr));
//		printf("%d\n", sizeof(arr + 0));
//		printf("%d\n", sizeof(*arr));
//		printf("%d\n", sizeof(arr[1]));
//		printf("%d\n", sizeof(&arr));
//		printf("%d\n", sizeof(&arr + 1));
//		printf("%d\n", sizeof(&arr[0] + 1));
//
//
//		printf("%d\n", strlen(arr));
//		printf("%d\n", strlen(arr + 0));
//		/*printf("%d\n", strlen(*arr)); 报错
//		printf("%d\n", strlen(arr[1]));报错
//		printf("%d\n", strlen(&arr));
//		printf("%d\n", strlen(&arr + 1));
//		printf("%d\n", strlen(&arr + 1));*/
//
//		char arr2[] = "abcdef";
//
//		printf("%d\n", sizeof(arr));
//		printf("%d\n", sizeof(arr + 0));
//		printf("%d\n", sizeof(*arr));
//		printf("%d\n", sizeof(arr[1]));
//		printf("%d\n", sizeof(&arr));
//		printf("%d\n", sizeof(&arr + 1));
//		printf("%d\n", sizeof(&arr[0] + 1));
//
//		char* p = "abcdef";
//		printf("%d\n", sizeof(p));
//		printf("%d\n", sizeof(p + 1));
//		printf("%d\n", sizeof(*p));
//		printf("%d\n", sizeof(p[0]));//p[0]==*(p+0)
//		printf("%d\n", sizeof(&p));
//		printf("%d\n", sizeof(&p + 1));
//		printf("%d\n", sizeof(&p[0] + 1));
//
//		printf("%d\n", strlen(p));
//		printf("%d\n", strlen(p + 0));
//		//printf("%d\n", strlen(*p));// 报错
//		//printf("%d\n", strlen(p[1]));// 报错
//		//printf("%d\n", strlen(&p));
//		//printf("%d\n", strlen(&p + 1));
//		//printf("%d\n", strlen(&p + 1));
//}