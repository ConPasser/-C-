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
	//选择函数
	int input = 0;
	int line = 0;
	int com = 0;
	int arr[10] = {0};
	int a = 0;
	printf("shijiannihao\n");
	printf("你要好好学习嘛（0/1）：");
	scanf("%d",&input);
	if (input == 1)
	{
		while (line <= 30000)
		{
			printf("%d写代码\n", line);
			line++;
		}
		if (line == 30001)
		{
			printf("小有所成\n");
		}
	}
	else
	{
		printf("NO offer\n");
	}
	printf("请输入第一个整数：");
	scanf("%d", &input);
	printf("请输入第二个整数：");
	scanf("%d", &com);
	printf("这两个整数的和为：%d\n", Add(input, com));

	//printf("请输入10个整数：");
	//for (int i = 0;i < 10;i++)
	//{
	//	scanf("%d",&arr[i]);

	//}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n数组的大小为：%d\n",sizeof(arr));   //数组的总大小 
	printf("数组的个数为：%d\n",sizeof(arr)/sizeof(arr[0]));
	
	//按位取反  ~
	printf("按位取反的值为：%d\n",~a);
	//强制类型转换
	printf("%d\n",(int)d);   //将12.68强转为int  损失精度

	//三目操作符
	printf("输入比较的第一个数：");
	scanf("%d", &input);
	printf("输入比较的第一个数：");
	scanf("%d", &com);

	printf("较大的数为：%d\n",(input > com ? input : com));

	//类型重命名  typedef

	
	return 0;
}