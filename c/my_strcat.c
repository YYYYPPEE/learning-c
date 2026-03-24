#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
char* my_strcat(char *des,const char* src)
{
	char* start = des;
	while (*des != '\0')
	{
		des++;
	}

	while (*src)
	{
		*des++ = *src++;
	}
	*des = '\0';
	return start;
}
int main()
{
	char arr1[20] = { "hello " };
	my_strcat(arr1, "world");
	printf("%s ", arr1);
	return 0;
}
