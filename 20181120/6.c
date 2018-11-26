#include<stdio.h>
#include <string.h>
int str_count(char *substr, char *str)
{
int sum,len;
char * p;
len = strlen(substr);
if(len<1)
return -1;
for(sum=0,p=str;;)
{
p = strstr(p,substr);
if(p!=NULL)
{
sum++;
p+=len;
}
else
break;
}
return sum;
}

int main()
{
	char str[100];
	printf("输入一个字符串:");
	scanf("%s",str);
	char substr[100];
	printf("输入一个字符串:");
	scanf("%s",substr);
        printf("出现了%d次",str_count(substr,str));
	return 0;
}
