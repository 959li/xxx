#include<stdio.h>

//
//int main()
//{
//
//	int a[4] = { 1,2,3,4 };
//	int* ptr = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x %x", ptr[-1], *ptr2);
//	return 0;
//}

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = 0;
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}


}

void my_qsort(void* base,
	int sz,
	int width,
	int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base + (j+1)* width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}


int compar(const void* e1, const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}
void print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{

	int arr[10] = { 9,8,7,6,5,4,1,2,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), compar);
	print(arr, sz);
}