#include "shangpin.h"


typedef struct shangpin
{
	char name[10];       // 商品名
	char id[20];         //编号
	double jiage;   //单价

} Datas;
Datas datass[10000];
int sizes = 0;

void Shangpinmokuai()
{
	int a = 0;
	do
	{
		shangpinjianmian();
		//printf("----------------------\n");
		printf("\n");
		printf("请输入0-7选择模块：");
		scanf("%d", &a);
		printf("----------------------\n");

		switch (a)
		{
		case 1:
			Addshangpin();
			break;
		case 2:
			shangchushangpin();
			break;
		case 3:
			xiugaishangpin();
			break;
		case 4:
			chaxunshangpin();
			break;
		case 5:
			shangpindaying();
			break;
		case 6:
			shangpinsave();
			break;
		case 7:
			shangpinload();
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

void shangpinjianmian()
{
	printf("进入商品模块\n");
	printf("-------------------------------------\n");
	printf("\t1.添加商品信息\n");
	printf("                                     \n");
	printf("\t2.删除商品信息\n");
	printf("                                     \n");
	printf("\t3.修改商品信息\n");
	printf("                                     \n");
	printf("\t4.查询商品信息\n");
	printf("                                     \n");
	printf("\t5.打印全部的商品信息\n");
	printf("                                     \n");
	printf("\t6.将商品的信息保存到文件\n");
	printf("                                     \n");
	printf("\t7.从文件中导入商品信息\n");
	printf("                                     \n");
	printf("\t0.返回主系统\n");
	printf("-------------------------------------\n");
}

void Addshangpin()
{
	printf("添加商品信息！！！！\n");
	Datas data;
	int a = 1;
	int b = 1;
	while (a)
	{
		printf("请输入商品编号：");
		scanf("%s", data.id);
		a = panduans3(data.id);
	}
	printf("请输入商品名：");
	scanf("%s", data.name);
	
	printf("请输入商品单价：");
	scanf("%lf", &data.jiage);
	datass[sizes] = data;
	sizes++;
}

void shangchushangpin()
{
	printf("删除商品的信息！！！！\n");
	int a = 1;
	int i = 0;
	int count = 0;
	char o[10];
	while (a)
	{
		printf("请输入需要删除商品的序号：");
		scanf("%s", o);
		a = panduans3(o);
	}

	for (i = 0; i < sizes; i++)
	{
		if (strcmp(datass[i].id, o) == 0)
		{
			count = 1;
			int j;
			for (j = i; j < sizes - 1; j++)
			{
				datass[j] = datass[j + 1];
			}
			sizes--;
			printf("删除成功！！！！！\n");
			break;
		}
	}
	if (count == 0)
	{
		printf("没有要删除卖家的信息！！！\n");
	}
}

void xiugaishangpin()
{
	int i = 0;
	int count = 0;
	int a = 1;
	int b = 1;
	printf("修改商品信息!!!!!!!\n");
	while (a)
	{
		printf("请输入商品的编号：");
		char o[10];
		scanf("%s", o);
		a = panduans3(o);

		for (i = 0; i < sizes; i++)
		{
			if (strcmp(datass[i].id, o) == 0)
			{
				count = 1;
				printf("请输入修改的商品编号：");
				scanf("%s", datass[i].id);
				printf("请输入修改的商品名称：");
				scanf("%s", datass[i].name);
				printf("请输入修改的商品单价：");
				scanf("%lf", &datass[i].jiage);
				printf("修改成功\n");
				break;
			}
		}
	}
	if (count == 0)
	{
		printf("没有要修改商品的信息！！！\n");
	}

}

void chaxunshangpin()
{
	printf("查找商品信息!!!!!!\n");
	int i = 0;
	int count = 0;
	int a = 1;
	char o[10];
	while (a)
	{
		printf("请输入商品的序号：");
		scanf("%s", o);
		a = panduans3(o);
	}
	for (i = 0; i < sizes; i++)
	{
		if (strcmp(datass[i].id, o) == 0)
		{
			count = 1;
			printf("打印该商品的信息\n");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-20s%-10s\n", "商品编号", "商品名", "商品单价");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-20s%-10.2lf\n", datass[i].id, datass[i].name, datass[i].jiage);
			break;
		}
	}
	if (count == 0)
	{
		printf("没有该商品的信息！！！\n");
	}

}

void shangpindaying()
{
	printf("打印卖家信息！！！！！\n");
	if (sizes == 0)
	{
		printf("当前系统不存在任何卖家信息\n");
		return;
	}
	printf("打印全部的商品信息\n");
	printf("----------------------------------------------------------\n");
	printf("%-10s%-20s%-10s\n", "商品编号", "商品名", "商品单价");
	printf("----------------------------------------------------------\n");

	int i = 0;
	for (i = 0; i < sizes; i++)
	{
		printf("%-10s%-20s%-10.2lf\n", datass[i].id, datass[i].name, datass[i].jiage);
	}
	printf("----------------------------------------------------------\n");

}

void shangpinsave()
{
	printf("将商品的信息保存到文件!!!!!!\n");
	FILE* fp = NULL;
	char filename[100];
	printf("请输入文件存储路径：");
	scanf("%s", filename);
	fp = fopen(filename, "ab");

	if (fp == NULL)
	{
		printf("打开文件出错！！！\n");
		return;
	}
	int i;
	for (i = 0; i < sizes - 1; i++)
	{
		fprintf(fp, "%-10s%-20s%-10.2lf\n", datass[i].id, datass[i].name, datass[i].jiage);
		fflush(stdin);
	}
	if (sizes > 0)
	{
		fprintf(fp, "%-10s%-20s%-10.2lf", datass[sizes - 1].id, datass[sizes - 1].name, datass[sizes - 1].jiage);
		fflush(stdin);
	}
	fclose(fp);
	fp = NULL;
	printf("导出成功!!!!!!!!!!!\n");

}

void shangpinload()
{
	printf("从文件中导入商品信息！！！！！！！！！\n");
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

	sizes = 0;
	while (!feof(fp))
	{
		//sizes++;
		fscanf(fp, "%s%s%lf", datass[sizes].id, datass[sizes].name, &datass[sizes].jiage);
		//sizes++;
		sizes = sizes + 1;
	}
	fclose(fp);
	fp = NULL;
	printf("加载成功！！！1\n");


}

int panduans3(char arr[])
{
	long add1 = atoi(arr);
	if (strlen(arr) == 6 && add1 != 0)
	{
		return 0;
	}
	else
	{
		printf("输入有误，请重新输入！！！\n");
		return 1;
	}
}