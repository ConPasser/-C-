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
//			printf("跳出循环\n");
//			break;
//		}
//		if (3 == i)
//		{
//			printf("跳出本次循环\n");
//			continue;
//		}
//		printf("%d ",i);
//	}
//
//
//	i = 0;
//	//do....while（）循环
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
//	//练习求n！
//	printf("\n输入需要求的数：");
//	scanf("%d",&m);
//	for ( i = m; i > 1; i--)
//	{
//		n = n * i;
//		//printf("阶乘为：%d",n);
//	}
//	printf("阶乘为：%d\n", n);
//
//
//	//一到十阶乘的和
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
//	printf("1-10阶乘的和为：%d\n",t);
//
//
//	//改进方案
//	z = 1;
//	m = 0;
//	for ( i = 1; i < 11; i++)
//	{
//		z = z * i;
//		m = m + z;
//	}
//	printf("1-10阶乘的和为：%d\n",m);
//
//	return 0;
//}