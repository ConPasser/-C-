#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr1[] = "welcome to jiawenying!!!!!";
	char arr2[] = "##########################";
	int left = 0;
	int right = strlen(arr1) - 1;

	//arr2[left] = arr1[left];
	//arr2[right] = arr1[right];
	//printf("%s\n", arr2);
	//left++;
	//right--;

	while (right >= left)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);  // ÀØ√ﬂ“ª√Î
		system("cls");  //«Â∆¡
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}