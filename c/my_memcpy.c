#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>

void* my_memcpy(void* des, const void* sou, int num)
{
	assert(des && sou);
	void* start = des;
	for(int i = 0;i < num;i++)
	{
		*(char*)des = *(char*)sou;
		des = (char*)des + 1;
		sou = (char*)sou + 1;
	}
	return des;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 28);
	
	
	
	return 0;
}
