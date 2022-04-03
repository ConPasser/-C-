#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>




void Xiaofeizhemokuai()
{
	printf("消费者模块\n");


}

void Weizimokuai()
{
	printf("交易模块\n");


}

int main()
{
	int i = 0;
	do
	{
		zhujianmain();
		//printf("----------------------\n");
		printf("\n");
		printf("请输入0-4选择模块：");
		scanf("%d", &i);
		printf("----------------------\n");
		
		switch (i)
		{
		case 1:
			Maijiamokuai();
			break;
		case 2:
			Xiaofeizhemokuai();
			break;
		case 3:
			Shangpinmokuai();
			break;
		case 4:
			Weizimokuai();
			break;
		case 0:
			printf("\n");
			printf("退出系统\n");
			break;
		default:
			printf("\n");
			printf("输入有误，请重新输入：\n");
			break;
		}
	} while (i);
	

	return 0;
}