#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ�������C���Դ����µ����ͳ���

//����һ��ѧ��

struct Stu
{
	char name[20];
	int age;
	double score;
};

//����һ��������

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

		printf("������ѧ����������");
		scanf("%s",&s.name);
		//printf("%s",s.name);
		printf("������ѧ�������䣺");
		scanf("%d",&s.age);
		printf("������ѧ���ĳɼ���");
		scanf("%lf",&s.score);
		printf("%s %d %f\n",pa->name,pa->age,pa->score);

	}
	//struct Stu s = { "����", 20, 93.2 };//�ṹ��Ĵ������ʼ��
	//printf("%s %d %f\n",s.name,s.age,s.score);

	return 0;
}