#include<stdio.h>
#include<string.h>

//void test3()
//{
//	printf("hehe\n");
//}
//
//void test2()
//{
//	test3();
//}
//
//void test()
//{
//	test2();
//}
//
//int main()
//{
//
//	test();
//	return 0;
//}
//void my_strcpy(char* dest, const char* str)
//{
	/*while (*str != '\0')
	{
		*dest = *str;
		*dest++;
		*str++;
	}
	*dest = *str;*/


	//while (*str != '\0')
	//{
	//	*dest++ = *str++;

	//}
	//*dest = *str;


	//while (*dest++ = *str++)
	//{
	//

	//}
	//以上三种方法 逐步优化
	

//}

//int main()
//{
//
//	char arr1[10] = "xxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	/*strcpy(arr1, arr2);*/
//	printf("%s\n", arr1);
//
//}


//1！+2！+3！+...+n！


//调试逐步看，F5直接调试 F9加/删除断点 ，F10逐步调试，F11进入函数，ctrl+f5跳过调试直接运行
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf_s("%d", &n);
//	for (int j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}