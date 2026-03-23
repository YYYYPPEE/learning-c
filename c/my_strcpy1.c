#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* des,const char* src)
{
	assert(des && src);
	while (*des++ = *src++)
	{
		;
	}
	return des;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
