#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>
//int main()
//{
//
//	FILE* pf = fopen("text.ext", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		perror("awd");//直接打印错误 参数是个字符就行 和上一步答案相同
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


//int main()
//{
//
//	char ch = '#';
//	int ret =  isdigit(ch);//数字字符返回非0
//	int ret1 = islower('c');
//	printf("%d\n", ret);
//	printf("%d", ret1);
//}

int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		
			i++;
	}
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%c ", arr[i]);
	}
	
	return 0;
}