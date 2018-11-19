#include<stdio.h>

void my_strcpy(char*dest,const char*src);
int main() 
{
	char dest[1000],src[1000];
	scanf("%s",src);
	
	my_strcpy(dest,src);
	
	printf("%s",dest);
	return 0;
}
void my_strcpy(char*dest,const char*src)
{
	do
	{
		*dest++ = *src++;
	}while(*src!=0);
	*dest = 0;
}
