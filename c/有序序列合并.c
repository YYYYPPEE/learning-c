#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void merge(int arr1[], int arr2[], int n, int m)
{
	int i = 0;
	int j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i == n && j < m)
	{
		for (;j < m;j++)
			printf("%d ", arr2[j]);
	}
	else
	{
		for (;i < n;i++)
			printf("%d ", arr1[i]);

	}
}
int main()
{
	int i = 0;
	int arr1[1000];
	int arr2[1000];
	int len1 = 0;
	int len2 = 0;
	scanf("%d %d", &len1, &len2);
	for (i = 0;i < len1;i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0;i < len2;i++)
	{
		scanf("%d", &arr2[i]);
	}
	merge(arr1, arr2, len1, len2);

	return 0;
}
