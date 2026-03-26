#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int flag1 = 0;//降序
    int flag2 = 0;//升序
    scanf("%d", &n);
    int arr[50] = { 0 };
    for (i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i - 1] > arr[i])
            {
                flag1 = 1;
            }
            if (arr[i - 1] < arr[i])
            {
                flag2 = 1;
            }
            else
            {
                ;
            }

        }
    }
    if (flag2 + flag1 <= 1)
    {
        printf("sorted");
    }
    else
    {
        printf("unsorted");
    }




    return 0;
}
