#include<stdio.h>
#include<string.h>

//int main()
//{
//
//	char str1[20] = "abcddd";
//	char str2[20] = "dddabc";
//	int len = strlen(str1);
//	int len2 = strlen(str2);
//	
//	if (strlen(str1) != strlen(str2))
//	{
//		printf("���Ƿ�ת\n");
//	}
//	
//	else
//	{
//		strncat(str1, str1, len);
//		char* ted = strstr(str1, str2);
//		if (ted != NULL)
//			printf("��ת\n");
//		else
//			printf("���Ƿ�ת\n");
//	}
//	printf("%d ", len);
//	printf("%d ", len2);
//	return 0;
//
//}

int my_pdfz( char str1[], char str2[], int sz)
{

	if (strlen(str1) != strlen(str2))
		return 0;
	else
	{
		strncat(str1, str1, sz);
		char* ted = strstr(str1, str2);
		if (ted == NULL)
			return 0;
		else
		{
			return 1;
		}
	}

}

int main()
{
	char arr1[20] = "ABCDDDSA";
	char arr2[20] = "AB";
	int len = strlen(arr1);
	int ret = my_pdfz(arr1, arr2, len);
	if (ret == 0)
		printf("���Ƿ�ת");
	else
	{
		printf("�Ƿ�ת");
	}


}