#include "shangpin.h"


typedef struct shangpin
{
	char name[10];       // ��Ʒ��
	char id[20];         //���
	double jiage;   //����

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
		printf("������0-7ѡ��ģ�飺");
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

void shangpinjianmian()
{
	printf("������Ʒģ��\n");
	printf("-------------------------------------\n");
	printf("\t1.�����Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t2.ɾ����Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t3.�޸���Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t4.��ѯ��Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t5.��ӡȫ������Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t6.����Ʒ����Ϣ���浽�ļ�\n");
	printf("                                     \n");
	printf("\t7.���ļ��е�����Ʒ��Ϣ\n");
	printf("                                     \n");
	printf("\t0.������ϵͳ\n");
	printf("-------------------------------------\n");
}

void Addshangpin()
{
	printf("�����Ʒ��Ϣ��������\n");
	Datas data;
	int a = 1;
	int b = 1;
	while (a)
	{
		printf("��������Ʒ��ţ�");
		scanf("%s", data.id);
		a = panduans3(data.id);
	}
	printf("��������Ʒ����");
	scanf("%s", data.name);
	
	printf("��������Ʒ���ۣ�");
	scanf("%lf", &data.jiage);
	datass[sizes] = data;
	sizes++;
}

void shangchushangpin()
{
	printf("ɾ����Ʒ����Ϣ��������\n");
	int a = 1;
	int i = 0;
	int count = 0;
	char o[10];
	while (a)
	{
		printf("��������Ҫɾ����Ʒ����ţ�");
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
			printf("ɾ���ɹ�����������\n");
			break;
		}
	}
	if (count == 0)
	{
		printf("û��Ҫɾ�����ҵ���Ϣ������\n");
	}
}

void xiugaishangpin()
{
	int i = 0;
	int count = 0;
	int a = 1;
	int b = 1;
	printf("�޸���Ʒ��Ϣ!!!!!!!\n");
	while (a)
	{
		printf("��������Ʒ�ı�ţ�");
		char o[10];
		scanf("%s", o);
		a = panduans3(o);

		for (i = 0; i < sizes; i++)
		{
			if (strcmp(datass[i].id, o) == 0)
			{
				count = 1;
				printf("�������޸ĵ���Ʒ��ţ�");
				scanf("%s", datass[i].id);
				printf("�������޸ĵ���Ʒ���ƣ�");
				scanf("%s", datass[i].name);
				printf("�������޸ĵ���Ʒ���ۣ�");
				scanf("%lf", &datass[i].jiage);
				printf("�޸ĳɹ�\n");
				break;
			}
		}
	}
	if (count == 0)
	{
		printf("û��Ҫ�޸���Ʒ����Ϣ������\n");
	}

}

void chaxunshangpin()
{
	printf("������Ʒ��Ϣ!!!!!!\n");
	int i = 0;
	int count = 0;
	int a = 1;
	char o[10];
	while (a)
	{
		printf("��������Ʒ����ţ�");
		scanf("%s", o);
		a = panduans3(o);
	}
	for (i = 0; i < sizes; i++)
	{
		if (strcmp(datass[i].id, o) == 0)
		{
			count = 1;
			printf("��ӡ����Ʒ����Ϣ\n");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-20s%-10s\n", "��Ʒ���", "��Ʒ��", "��Ʒ����");
			printf("----------------------------------------------------------\n");
			printf("%-10s%-20s%-10.2lf\n", datass[i].id, datass[i].name, datass[i].jiage);
			break;
		}
	}
	if (count == 0)
	{
		printf("û�и���Ʒ����Ϣ������\n");
	}

}

void shangpindaying()
{
	printf("��ӡ������Ϣ����������\n");
	if (sizes == 0)
	{
		printf("��ǰϵͳ�������κ�������Ϣ\n");
		return;
	}
	printf("��ӡȫ������Ʒ��Ϣ\n");
	printf("----------------------------------------------------------\n");
	printf("%-10s%-20s%-10s\n", "��Ʒ���", "��Ʒ��", "��Ʒ����");
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
	printf("����Ʒ����Ϣ���浽�ļ�!!!!!!\n");
	FILE* fp = NULL;
	char filename[100];
	printf("�������ļ��洢·����");
	scanf("%s", filename);
	fp = fopen(filename, "ab");

	if (fp == NULL)
	{
		printf("���ļ���������\n");
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
	printf("�����ɹ�!!!!!!!!!!!\n");

}

void shangpinload()
{
	printf("���ļ��е�����Ʒ��Ϣ������������������\n");
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
	printf("���سɹ�������1\n");


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
		printf("�����������������룡����\n");
		return 1;
	}
}