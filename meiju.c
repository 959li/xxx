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
		printf("请选择>");
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

//上面是常规写法  下面采用枚举 更直观 否者则1234会导致么有菜单不理解什么意思
//int main()
//{
//	int input = 0;
//	do
//	{
//		enmu();
//		printf("请选择>");
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




//枚举意思和define差不多 都是有赋值的作用 但是define全局会导致命名错误 而且枚举更方便