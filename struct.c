#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体可以让C语言创建新的类型出来

//创建一个学生

struct Stu
{
	char name[20];
	int age;
	double score;
};

//创建一个书类型

struct Book
{
	char name[20];
	double price;
	char id[30];
};
int main()
{
	while (1)
	{
		struct Stu s = {"0",0,0};
		struct Stu *pa = &s;
		//printf("%s %d %f\n", s.name, s.age, s.score);

		printf("请输入学生的姓名：");
		scanf("%s",&s.name);
		//printf("%s",s.name);
		printf("请输入学生的年龄：");
		scanf("%d",&s.age);
		printf("请输入学生的成绩：");
		scanf("%lf",&s.score);
		printf("%s %d %f\n",pa->name,pa->age,pa->score);

	}
	//struct Stu s = { "张三", 20, 93.2 };//结构体的创建与初始化
	//printf("%s %d %f\n",s.name,s.age,s.score);

	return 0;
}