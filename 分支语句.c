#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////结构体可以让C语言创建新的类型出来
//
////创建一个学生
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
////创建一个书类型
//
//struct Book
//{
//	char name[20];
//	double price;
//	char id[30];
//};
//int main()
//{
//	while (1)
//	{
//		struct Stu s = {"0",0,0};
//		struct Stu *pa = &s;
//		//printf("%s %d %f\n", s.name, s.age, s.score);
//
//		printf("请输入学生的姓名：");
//		scanf("%s",&s.name);
//		//printf("%s",s.name);
//		printf("请输入学生的年龄：");
//		scanf("%d",&s.age);
//		printf("请输入学生的成绩：");
//		scanf("%lf",&s.score);
//		printf("%s %d %f\n",pa->name,pa->age,pa->score);
//
//	}
//	//struct Stu s = { "张三", 20, 93.2 };//结构体的创建与初始化
//	//printf("%s %d %f\n",s.name,s.age,s.score);
//
//	return 0;
//}



int main()
{
	int day = 0;
	for (int i = 1; i < 101; i++)
	{
		if (1 == i % 2)
		{
			printf("%d ",i);
		}

	}

	printf("\n请输入1-7:");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}