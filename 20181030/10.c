#include<stdio.h>
int is_str_pal(const char* str) 
{
	if (str == NULL)
		return -1;
	int i, j;
	for (i = 0, j = (int)strlen(str) - 1; i < j; ++i, --j)
		if (str[i] != str[j])
			return -1;
	return 0;
}
int main()
{
	const char* str;
	int is_str_pal(const char* str);
}
