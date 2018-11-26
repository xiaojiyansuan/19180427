#include <stdio.h>
#include <string.h>
int substr(const char* str, const char* substr);
int main()
{
	char a[30], b[10];
	char *p = a , *q = b;
	gets(a);
	gets(b);
	printf("%d",substr(p,q));
	system("pause");
	return 0;
}
int substr(const char* str, const char* substr)
{
	int m = strlen(str),n = strlen(substr),i,j;
	for (i=0;i<m-n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (*(str+i+j)!=*(substr+i+j))
				break;
			if (j=n-1)
				return i+1;
		}
	}
	return -1;
}
