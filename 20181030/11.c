#include <stdio.h>
void reverse(char* str);
int main()
{
	char str[100];
	scanf("%s",str);
	reverse(*str);
	return 0;
}


void reverse(char*str)
{
	int i=0,temp;
	for (;i<50;i++)
	{
		temp=str[i];
		str[i]=str[99-i];
		str[99-i]=temp;
	}
	printf("%s",str);
}
