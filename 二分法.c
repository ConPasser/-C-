#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int sl = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sl - 1;
	int min = 0;
	int k = 0;   //�����ֵ
	int i = 0;
	for ( i = 0; i < sl + 1; i++)
	{
		//scanf("%d",&arr[i]);
		arr[i] = i + 1;
	}
	//for ( i = 0; i < 100; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	/*if (arr[min] > k)
	{
		right = min - 1;
	}
	else if (arr[min] < k)
	{
		left = min + 1;
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ��%d",min);
	}*/

	printf("������һ������:");
	scanf("%d",&k);


	while (right >= left)
	{
		min = (left + right) / 2;
		if (arr[min] > k)
		{
			right = min - 1;
		}
		else if (arr[min] < k)
		{
			left = min + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ��%d\n", min);
			break;
		}
	}
	if (right < left)
	{
		printf("û�и���\n");
	}


	return 0;
}