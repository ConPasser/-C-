//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int n = 1;
//	int z = 1;
//	int t = 0;
//
//	for ( i = 1; i < 11; i++)
//	{
//		if (8 == i)
//		{
//			printf("����ѭ��\n");
//			break;
//		}
//		if (3 == i)
//		{
//			printf("��������ѭ��\n");
//			continue;
//		}
//		printf("%d ",i);
//	}
//
//
//	i = 0;
//	//do....while����ѭ��
//	do
//	{
//		if ( 8 == i)
//		{
//			break;
//		}
//		if (3 == i)
//		{
//			i++;
//			continue;
//		}
//		printf("%d ",i);
//		i++;
//	} while (i < 10);
//
//
//
//	//��ϰ��n��
//	printf("\n������Ҫ�������");
//	scanf("%d",&m);
//	for ( i = m; i > 1; i--)
//	{
//		n = n * i;
//		//printf("�׳�Ϊ��%d",n);
//	}
//	printf("�׳�Ϊ��%d\n", n);
//
//
//	//һ��ʮ�׳˵ĺ�
//	for (i = 1; i < 11; i++)
//	{
//		z = 1;
//		for (j = 1;j < i + 1 ; j++)
//		{
//			
//			z *= j;
//		}
//		t += z;
//		
//	}
//	printf("1-10�׳˵ĺ�Ϊ��%d\n",t);
//
//
//	//�Ľ�����
//	z = 1;
//	m = 0;
//	for ( i = 1; i < 11; i++)
//	{
//		z = z * i;
//		m = m + z;
//	}
//	printf("1-10�׳˵ĺ�Ϊ��%d\n",m);
//
//	return 0;
//}