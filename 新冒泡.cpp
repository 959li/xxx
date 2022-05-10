#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void maopao( int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


//int main()
//{
//	int arr[10] = { 10,9,8,7,4,5,6,1,2,3 };
//	int  sz = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, sz);
//	print(arr, sz);
//}





void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}




int cmpar(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}




void test1()
{
	int arr[10] = { 1,3,2,4,8,6,5,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmpar);
	print(arr, sz);
}

struct stu
{
	char name[20];
	int age;
};

int compar_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;

}
int compar_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e1)->name);
}

void test2()
{
	struct stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",49} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compar_age);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%s %d\n", s[j].name, s[j].age);

	}
	qsort(s, sz, sizeof(s[0]), compar_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[i]. age);

	}
	

}

//void qsort(void * base,比较内容首地址
				/*	size_t num,元素个数
					size_t size,一个元素的字节
						int (*compar)(const void*,const void*))*/
int main()
{
	test1();
	printf("\n");
	test2();
}
