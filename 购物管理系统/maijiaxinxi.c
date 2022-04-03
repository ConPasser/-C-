#include "maijiaxinxi.h"

typedef struct maijia
{
	char name[10];
	char id[20];
	char dianming[20];
	char add[10];

} Data;
Data datas[10000];
int size = 0;

void zhujianmain()
{
	printf("---------------------------------\n");
	printf("**********购物管理系统***********\n");
	printf("---------------------------------\n");
	printf("                                 \n");
	printf("---------------------------------\n");
	printf("\t1.卖家模块\n");
	printf("                                 \n");
	printf("\t2.消费者模块\n");
	printf("                                 \n");
	printf("\t3.商品模块\n");
	printf("                                 \n");
	printf("\t4.交易模块\n");
	printf("                                 \n");
	printf("\t0.退出系统\n");
	printf("---------------------------------\n");
}

void maijiajianmian()
{
	printf("进入卖家模块\n");
	printf("-------------------------------------\n");
	printf("\t1.添加卖家信息\n");
	printf("                                     \n");
	printf("\t2.删除卖家信息\n");
	printf("                                     \n");
	printf("\t3.修改卖家信息\n");
	printf("                                     \n");
	printf("\t4.查询卖家信息\n");
	printf("                                     \n");
	printf("\t5.打印全部的卖家信息\n");
	printf("                                     \n");
	printf("\t6.将卖家的信息保存到文件\n");
	printf("                                     \n");
	printf("\t7.从文件中导入卖家信息\n");
	printf("                                     \n");
	printf("\t0.返回主系统\n");
	printf("-------------------------------------\n");
}

void Maijiamokuai()
{
	int a = 0;
	do
	{
		maijiajianmian();
		//printf("----------------------\n");
		printf("\n");
		printf("请输入0-7选择模块：");
		scanf("%d", &a);
		printf("----------------------\n");

		switch (a)
		{
		case 1:
			Addmaijia();
			break;
		case 2:
			shangchumaijia();
			break;
		case 3:
			xiugaimaijia();
			break;
		case 4:
			chaxunmaijia();
			break;
		case 5:
			daying();
			break;
		case 6:
			save();
			break;
		case 7:
			load();
			break;
		case 0:
			printf("\n");
			printf("返回主页面\n");
			break;
		default:
			printf("\n");
			printf("输入有误，请重新输入：\n");
			break;
		}
		printf("\n");
	} while (a);
}

void Addmaijia()
{
	printf("添加卖家信息!!!!!!!\n");
	Data data;
	int a = 1;
	int b = 1;
	while (a)
	{
		printf("请输入卖家序号：");
		scanf("%s", data.add);
		a = panduan3(data.add);
	}
	printf("请输入卖家名：");
	scanf("%s", data.name);
	while (b)
	{
		printf("请输入卖家电话：");
		scanf("%s", data.id);
		b = panduan11(data.id);
	}
	printf("请输入店名：");
	scanf("%s", data.dianming);
	datas[size] = data;
	size++;
}

void shangchumaijia()
{
	printf("删除卖家的信息！！！！\n");
	int a = 1;
	int i = 0;
	int count = 0;
	char o[10];
	while (a)
	{
		printf("请输入需要删除卖家的序号：");
		scanf("%s", o);
		a = panduan3(o);
	}

	for (i = 0; i < size; i++)
	{
		if (strcmp(datas[i].add, o) == 0)
		{
			count = 1;
			int j;
			for (j = i; j < size - 1; j++)
			{
				datas[j] = datas[j + 1];
			}
			size--;
			printf("删除成功！！！！！\n");
			break;
		}
	}
	if (count == 0)
	{
		printf("没有要删除卖家的信息！！！\n");
	}
}

void xiugaimaijia()
{
	int i = 0;
	int count = 0;
	int a = 1;
	int b = 1;
	printf("修改卖家信息!!!!!!!\n");
	while (a)
	{
		printf("请输入卖家的序号：");
		char o[10];
		scanf("%s", o);
		a = panduan3(o);

		for (i = 0; i < size; i++)
		{
			if (strcmp(datas[i].add, o) == 0)
			{
				count = 1;
				printf("请输入修改的卖家序号：");
				scanf("%s", datas[i].add);
				printf("请输入修改的卖家名：");
				scanf("%s", datas[i].name);
				while (b)
				{
					printf("请输入修改的卖家电话：");
					scanf("%s", datas[i].id);
					b = panduan11(datas[i].id);
				}
				printf("请输入修改的店名：");
				scanf("%s", datas[i].dianming);
				printf("修改成功\n");
				break;
			}
		}
	}
	if (count == 0)
	{
		printf("没有要修改卖家的信息！！！\n");
	}

}

void chaxunmaijia()
{
	printf("查找卖家信息!!!!!!\n");
	int i = 0;
	int count = 0;
	int a = 1;
	char o[10];
	while (a)
	{
		printf("请输入卖家的序号：");
		scanf("%s", o);
		a = panduan3(o);
	}
	for (i = 0; i < size; i++)
	{
		if (strcmp(datas[i].add, o) == 0)
		{
			count = 1;
			printf("打印全部的卖家信息\n");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-10s%-20s%-20s\n", "卖家编号", "卖家姓名", "卖家电话", "店铺名");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-10s%-20s%-20s\n", datas[i].add, datas[i].name, datas[i].id, datas[i].dianming);
			break;
		}
	}
	if (count == 0)
	{
		printf("没有该卖家的信息！！！\n");
	}
}

void daying()
{
	printf("打印卖家信息！！！！！\n");
	if (size == 0)
	{
		printf("当前系统不存在任何卖家信息\n");
		return;
	}
	printf("打印全部的卖家信息\n");
	printf("----------------------------------------------------------\n");
	printf("%-10s%-10s%-20s%-20s\n", "卖家编号", "卖家姓名", "卖家电话", "店铺名");
	printf("----------------------------------------------------------\n");

	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%-10s%-10s%-20s%-20s\n", datas[i].add, datas[i].name, datas[i].id, datas[i].dianming);
	}
	printf("----------------------------------------------------------\n");

}

void save()
{
	printf("将卖家的信息保存到文件!!!!!!\n");
	FILE* fp = NULL;
	char filename[100];
	printf("请输入文件存储路径：");
	scanf("%s", filename);
	fp = fopen(filename, "wb");

	if (fp == NULL)
	{
		printf("打开文件出错！！！\n");
		return;
	}
	int i;
	for (i = 0; i < size - 1; i++)
	{
		fprintf(fp, "%-10s%-10s%-20s%-20s\n", datas[i].add, datas[i].name, datas[i].id, datas[i].dianming);
		fflush(stdin);
	}
	if (size > 0)
	{
		fprintf(fp, "%-10s%-10s%-20s%-20s", datas[size - 1].add, datas[size - 1].name, datas[size - 1].id, datas[size - 1].dianming);
		fflush(stdin);
	}
	fclose(fp);
	printf("导出成功!!!!!!!!!!!\n");
}

void load()
{
	printf("从文件中导入卖家信息！！！！！！！！！\n");
	FILE* fp = NULL;
	char filename[100];
	printf("请输入文件存储路径：");
	scanf("%s", filename);
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		printf("打开文件出错！！！\n");
		return;
	}

	size = 0;
	while (!feof(fp))
	{
		fscanf(fp, "%s%s%s%s", datas[size].add, datas[size].name, datas[size].id, datas[size].dianming);
		size++;
	}
	printf("加载成功！！！1\n");
}

int panduan3(char arr[])
{
	int add1 = atoi(arr);
	if (strlen(arr) == 3 && add1 != 0)
	{
		//printf("继续执行\n");
		//printf("%d", add1);
		return 0;
	}
	else
	{
		printf("输入有误，请重新输入！！！\n");
		return 1;
	}
}

int panduan11(char arr[])
{
	int add1 = atoi(arr);
	if (strlen(arr) == 11 && add1 != 0)
	{
		//printf("继续执行\n");
		//printf("%d", add1);
		return 0;
	}
	else
	{
		printf("输入有误，请重新输入！！！\n");
		return 1;
	}
}