#include<stdio.h>

int strcpm(char*str1,char*str2);
int main()
{
	char str1[1000],str2[1000]; 
	scanf("%s",str1);
	scanf("%s",str2);
	
	int i;
	i=strcpm(str1,str2);
	printf("%d",i);
	return 0;
} 
int strcpm(char*str1,char*str2)
{
	while(*str1!=0&&*str2!=0)
	{
		if(*str1>*str2)
			return 1;
		else if(*str1<*str2)
			return -1;
		str1++;
		str2++;	
	}
	return 0;
}
