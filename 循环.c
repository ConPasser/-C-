#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int i = 1;
	int j = 1;
	//getchar 使用键盘输入一个字符 返回值为int
	int ch = 0;

	while (i <= 10)
	{
		if (5 == i)
		{
			printf("\n出现错误，循环终止\n");
			break;
		}
		printf("%d ",i);
		i++;
	}



	while (j <= 10)
	{
		if (5 == j)
		{
			printf("\n出现错误，跳出本次循环，进入下一次循环\n");
			j++;
			continue;
		}
		printf("%d ", j);
		j++;
	}



	// putchar 输出一个字符   EOF结束标志
	while ((ch = getchar()) != EOF)
	{
		if (32 == ch)
		{
			printf("退出\n");
			break;
		}
		putchar(ch);
	}
	

	int password =  0;
	printf("请输入你的学号：");
	scanf("%d",&password);

	printf("请确认您的学号（Y/N）：");

	//清除缓存区
	int che = 0;
	while ('\n' != (che = getchar()))
	{
		;
	}


	int tmp = getchar();
	if ('Y' == tmp)
	{
		printf("输入成功\n");
	}
	else
	{
		printf("输入失败\n");
	}

	printf("%d\n",password);
	return 0;
}