#include<stdio.h>
void my_strcpy(char *str, char *copy)
{
	if(str==NULL||copy==NULL)
	{
		return ;
	}
	while (1)
	{
		*copy = *str;
		if (*copy == '\0')
		{
			break;
		}
		copy++;
		str++;
	}
}
int main()
{
	char str[] = "hello";
	char copy[20] = { 0 };
	my_strcpy(str,copy);
	printf("%s", copy);
	return 0;
}
