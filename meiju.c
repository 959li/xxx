#include<stdio.h>

void enmu()
{
	printf("*******1.jia  2.jian*******\n");
	printf("*******3.cheng 4.chu*******\n");
	printf("*******    0.exit    ******\n");

}
enum jisu
{
	exit,
	jia,
	jian,
	cheng,
	chu
};

int main()
{
	/*int input = 0;
	do
	{
		enmu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 0:
			break;
		default:
			break;
		}


	} while (input);*/

	printf("%d\n", exit);
	printf("%d\n", jia);
	printf("%d\n", jian);
	printf("%d\n", cheng);
	printf("%d\n", chu );

}

//�����ǳ���д��  �������ö�� ��ֱ�� ������1234�ᵼ��ô�в˵������ʲô��˼
//int main()
//{
//	int input = 0;
//	do
//	{
//		enmu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case jia:
//			break;
//		case jian:
//			break;
//		case cheng :
//			break;
//		case chu :
//			break;
//		case exit:
//			break;
//		default:
//			break;
//		}
//
//
//	} while (input);
//}




//ö����˼��define��� �����и�ֵ������ ����defineȫ�ֻᵼ���������� ����ö�ٸ�����