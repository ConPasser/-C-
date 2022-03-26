#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//设计一个求字符串的长度的函数

int my_strlen1(char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;

}

int my_strlen2(char* a)
{
	if (*a != '\0')
	{
		return 1 + my_strlen2(a + 1);
	}
	else
	{
		return 0;
	}


}


int main()
{
	char arr[] = "nihaoshijian";
	printf("%d\n",my_strlen1(arr));
	printf("%d\n", my_strlen2(arr));



	return 0;
}