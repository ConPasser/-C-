#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x,int y)
{
	int z = 0;
	z = (x * 2) + (y * y);
	return z;
}

int main()
{
	double d = 12.68;
	//ѡ����
	int input = 0;
	int line = 0;
	int com = 0;
	int arr[10] = {0};
	int a = 0;
	printf("shijiannihao\n");
	printf("��Ҫ�ú�ѧϰ�0/1����");
	scanf("%d",&input);
	if (input == 1)
	{
		while (line <= 30000)
		{
			printf("%dд����\n", line);
			line++;
		}
		if (line == 30001)
		{
			printf("С������\n");
		}
	}
	else
	{
		printf("NO offer\n");
	}
	printf("�������һ��������");
	scanf("%d", &input);
	printf("������ڶ���������");
	scanf("%d", &com);
	printf("�����������ĺ�Ϊ��%d\n", Add(input, com));

	//printf("������10��������");
	//for (int i = 0;i < 10;i++)
	//{
	//	scanf("%d",&arr[i]);

	//}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n����Ĵ�СΪ��%d\n",sizeof(arr));   //������ܴ�С 
	printf("����ĸ���Ϊ��%d\n",sizeof(arr)/sizeof(arr[0]));
	
	//��λȡ��  ~
	printf("��λȡ����ֵΪ��%d\n",~a);
	//ǿ������ת��
	printf("%d\n",(int)d);   //��12.68ǿתΪint  ��ʧ����

	//��Ŀ������
	printf("����Ƚϵĵ�һ������");
	scanf("%d", &input);
	printf("����Ƚϵĵ�һ������");
	scanf("%d", &com);

	printf("�ϴ����Ϊ��%d\n",(input > com ? input : com));

	//����������  typedef

	
	return 0;
}