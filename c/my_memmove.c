#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
#include<string.h>
void* my_memmove(void*str1,const void*str2,int n)
{
	int i = 0;
	char* des = (char*)str1;
	char* src = (char*)str2;
	void* str = str1;
	assert(str1 && str2);
	if (str1 < str2)
	{
		while(n--)
		{
			*(des)++ = *(src)++;
		}
	}
	else
	{
		for (i = 0;i < n;i++)
		{
			*(des+n-1-i) = *(src+n-1-i);
		}
	}
	return str;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
