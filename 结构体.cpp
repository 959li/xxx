#include<stdio.h>

struct stu
{
	char name[20];
	int age;
	char id[12];

};
int main()
{
	struct stu s1 = { "Àî¼ÒÂ·",20,'2316' };
	printf("%d\n", sizeof(stu));
	return 0;

}