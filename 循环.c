#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int i = 1;
	int j = 1;
	//getchar ʹ�ü�������һ���ַ� ����ֵΪint
	int ch = 0;

	while (i <= 10)
	{
		if (5 == i)
		{
			printf("\n���ִ���ѭ����ֹ\n");
			break;
		}
		printf("%d ",i);
		i++;
	}



	while (j <= 10)
	{
		if (5 == j)
		{
			printf("\n���ִ�����������ѭ����������һ��ѭ��\n");
			j++;
			continue;
		}
		printf("%d ", j);
		j++;
	}



	// putchar ���һ���ַ�   EOF������־
	while ((ch = getchar()) != EOF)
	{
		if (32 == ch)
		{
			printf("�˳�\n");
			break;
		}
		putchar(ch);
	}
	

	int password =  0;
	printf("���������ѧ�ţ�");
	scanf("%d",&password);

	printf("��ȷ������ѧ�ţ�Y/N����");

	//���������
	int che = 0;
	while ('\n' != (che = getchar()))
	{
		;
	}


	int tmp = getchar();
	if ('Y' == tmp)
	{
		printf("����ɹ�\n");
	}
	else
	{
		printf("����ʧ��\n");
	}

	printf("%d\n",password);
	return 0;
}