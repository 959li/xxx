#include<stdio.h>

int main()
{
	//指针的注意点
	////野指针
	//int* p;
	//*p = 20;//此时就是一个野指针 因为*p没有初始化就没有赋予空间 所以20没法给*p


	//2.越界访问
	/*int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*p = i;
		p++;
	}*///上述i=10时没有空间 造成越界访问


	//
	/*int* test()
	{
		int a = 20;
		return &a;
	}

	int* p = test();
	*p = 20;
	return 0;*///a是局部变量 出来函数之后a已经置零 *p指示的内存也没有啦



	//指针使用尽量先判断是否可用 检查有效性
	int a = 1;
	int* p = &a;
	if (p != NULL)
	{
		//使用 否则因为空值没有内存不使用
	}
}