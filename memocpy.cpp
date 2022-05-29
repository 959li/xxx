#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* s1, const void* s2, int num)
{
	void* ret = s1;
	assert(s1 && s2);
	while (num--)
	{
		*(char*)s1 = *(char*)s2;
		s1 = (char*)s1 + 1;
		s2 = (char*)s2 + 1;
	}
	return ret;
}
void* my_memove( void* s1, const void* s2, int num)
{
	void* ret = s1;
	assert(s1 && s2);
	if (s1 < s2)
	{
		while (num--)
		{
			*(char*)s1 = *(char*)s2;
			s1 = (char*)s1 + 1;
			s2 = (char*)s2 + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)s1 + num) = *((char*)s2 + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	//memcpy(arr2, arr1,20);
	//my_memcpy(arr2, arr1, 20);
	my_memove(arr1+2, arr1, 20);
	return 0;
}