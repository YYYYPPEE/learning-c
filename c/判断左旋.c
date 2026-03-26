#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>

int is_left_move(char arr1[],char arr2[])
{
	int len=0;
	len = strlen(arr1);
	strncat(arr1, arr1, len);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;

}

int main()
{

	char arr1[20] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("ok\n");
	else
		printf("no\n");
	return 0;
}
