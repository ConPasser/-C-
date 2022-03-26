#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strlen(char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		a++;
		count++;
	}
	return count;

}

void print_fan1(char* a)
{
	int left = 0;
	int right = my_strlen(a) - 1;
	char i;
	while (left<right)
	{
		i = a[left];
		a[left] = a[right];
		a[right] = i;
		left++;
		right--;
	}
}

void print_fan2(char* a)  //使用递归的方式
{
	char i = *a;
	int len = my_strlen(a);
	*a = *(a + len - 1);
	*(a + len - 1) = '\0';
	if (my_strlen(a+1)>=2)
	{
		print_fan2(a + 1);
	}
	*(a + len - 1) = i;
}
int main()
{
	char arr[] = "abcdef";
	//print_fan1(arr);
	//printf("%s\n",arr);
	print_fan2(arr);
	printf("%s\n", arr);
	//printf("%d \n",my_strlen(arr));
	return 0;
}