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
	printf("**********�������ϵͳ***********\n");
	printf("---------------------------------\n");
	printf("                                 \n");
	printf("---------------------------------\n");
	printf("\t1.����ģ��\n");
	printf("                                 \n");
	printf("\t2.������ģ��\n");
	printf("                                 \n");
	printf("\t3.��Ʒģ��\n");
	printf("                                 \n");
	printf("\t4.����ģ��\n");
	printf("                                 \n");
	printf("\t0.�˳�ϵͳ\n");
	printf("---------------------------------\n");
}

void maijiajianmian()
{
	printf("��������ģ��\n");
	printf("-------------------------------------\n");
	printf("\t1.���������Ϣ\n");
	printf("                                     \n");
	printf("\t2.ɾ��������Ϣ\n");
	printf("                                     \n");
	printf("\t3.�޸�������Ϣ\n");
	printf("                                     \n");
	printf("\t4.��ѯ������Ϣ\n");
	printf("                                     \n");
	printf("\t5.��ӡȫ����������Ϣ\n");
	printf("                                     \n");
	printf("\t6.�����ҵ���Ϣ���浽�ļ�\n");
	printf("                                     \n");
	printf("\t7.���ļ��е���������Ϣ\n");
	printf("                                     \n");
	printf("\t0.������ϵͳ\n");
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
		printf("������0-7ѡ��ģ�飺");
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
			printf("������ҳ��\n");
			break;
		default:
			printf("\n");
			printf("�����������������룺\n");
			break;
		}
		printf("\n");
	} while (a);
}

void Addmaijia()
{
	printf("���������Ϣ!!!!!!!\n");
	Data data;
	int a = 1;
	int b = 1;
	while (a)
	{
		printf("������������ţ�");
		scanf("%s", data.add);
		a = panduan3(data.add);
	}
	printf("��������������");
	scanf("%s", data.name);
	while (b)
	{
		printf("���������ҵ绰��");
		scanf("%s", data.id);
		b = panduan11(data.id);
	}
	printf("�����������");
	scanf("%s", data.dianming);
	datas[size] = data;
	size++;
}

void shangchumaijia()
{
	printf("ɾ�����ҵ���Ϣ��������\n");
	int a = 1;
	int i = 0;
	int count = 0;
	char o[10];
	while (a)
	{
		printf("��������Ҫɾ�����ҵ���ţ�");
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
			printf("ɾ���ɹ�����������\n");
			break;
		}
	}
	if (count == 0)
	{
		printf("û��Ҫɾ�����ҵ���Ϣ������\n");
	}
}

void xiugaimaijia()
{
	int i = 0;
	int count = 0;
	int a = 1;
	int b = 1;
	printf("�޸�������Ϣ!!!!!!!\n");
	while (a)
	{
		printf("���������ҵ���ţ�");
		char o[10];
		scanf("%s", o);
		a = panduan3(o);

		for (i = 0; i < size; i++)
		{
			if (strcmp(datas[i].add, o) == 0)
			{
				count = 1;
				printf("�������޸ĵ�������ţ�");
				scanf("%s", datas[i].add);
				printf("�������޸ĵ���������");
				scanf("%s", datas[i].name);
				while (b)
				{
					printf("�������޸ĵ����ҵ绰��");
					scanf("%s", datas[i].id);
					b = panduan11(datas[i].id);
				}
				printf("�������޸ĵĵ�����");
				scanf("%s", datas[i].dianming);
				printf("�޸ĳɹ�\n");
				break;
			}
		}
	}
	if (count == 0)
	{
		printf("û��Ҫ�޸����ҵ���Ϣ������\n");
	}

}

void chaxunmaijia()
{
	printf("����������Ϣ!!!!!!\n");
	int i = 0;
	int count = 0;
	int a = 1;
	char o[10];
	while (a)
	{
		printf("���������ҵ���ţ�");
		scanf("%s", o);
		a = panduan3(o);
	}
	for (i = 0; i < size; i++)
	{
		if (strcmp(datas[i].add, o) == 0)
		{
			count = 1;
			printf("��ӡȫ����������Ϣ\n");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-10s%-20s%-20s\n", "���ұ��", "��������", "���ҵ绰", "������");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-10s%-20s%-20s\n", datas[i].add, datas[i].name, datas[i].id, datas[i].dianming);
			break;
		}
	}
	if (count == 0)
	{
		printf("û�и����ҵ���Ϣ������\n");
	}
}

void daying()
{
	printf("��ӡ������Ϣ����������\n");
	if (size == 0)
	{
		printf("��ǰϵͳ�������κ�������Ϣ\n");
		return;
	}
	printf("��ӡȫ����������Ϣ\n");
	printf("----------------------------------------------------------\n");
	printf("%-10s%-10s%-20s%-20s\n", "���ұ��", "��������", "���ҵ绰", "������");
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
	printf("�����ҵ���Ϣ���浽�ļ�!!!!!!\n");
	FILE* fp = NULL;
	char filename[100];
	printf("�������ļ��洢·����");
	scanf("%s", filename);
	fp = fopen(filename, "wb");

	if (fp == NULL)
	{
		printf("���ļ���������\n");
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
	printf("�����ɹ�!!!!!!!!!!!\n");
}

void load()
{
	printf("���ļ��е���������Ϣ������������������\n");
	FILE* fp = NULL;
	char filename[100];
	printf("�������ļ��洢·����");
	scanf("%s", filename);
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		printf("���ļ���������\n");
		return;
	}

	size = 0;
	while (!feof(fp))
	{
		fscanf(fp, "%s%s%s%s", datas[size].add, datas[size].name, datas[size].id, datas[size].dianming);
		size++;
	}
	printf("���سɹ�������1\n");
}

int panduan3(char arr[])
{
	int add1 = atoi(arr);
	if (strlen(arr) == 3 && add1 != 0)
	{
		//printf("����ִ��\n");
		//printf("%d", add1);
		return 0;
	}
	else
	{
		printf("�����������������룡����\n");
		return 1;
	}
}

int panduan11(char arr[])
{
	int add1 = atoi(arr);
	if (strlen(arr) == 11 && add1 != 0)
	{
		//printf("����ִ��\n");
		//printf("%d", add1);
		return 0;
	}
	else
	{
		printf("�����������������룡����\n");
		return 1;
	}
}