#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	 const char* s1 = str1;
	 const char* s2= str2;
	 const char* p = str1;
	while (*p)//判断
	{
		s1 = p;
		s2 = str2;
		while(*s1==*s2&&s1!='\0'&&s2!='\0')//有字符相同
		{
			s1++;
			s2++;

		}
		if (*s2 == '\0')
			return p;
		p++;
			
	}
	
	return NULL;

}
int main()
{
	char email[] = "1093110355@qq.com";
	char str[20] = "110";
	char* ret = my_strstr(email, str);
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else  
	{
		printf("%s\n",ret);
	}

	
	
	return 0;
}
