#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>




void Xiaofeizhemokuai()
{
	printf("������ģ��\n");


}

void Weizimokuai()
{
	printf("����ģ��\n");


}

int main()
{
	int i = 0;
	do
	{
		zhujianmain();
		//printf("----------------------\n");
		printf("\n");
		printf("������0-4ѡ��ģ�飺");
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
			printf("�˳�ϵͳ\n");
			break;
		default:
			printf("\n");
			printf("�����������������룺\n");
			break;
		}
	} while (i);
	

	return 0;
}