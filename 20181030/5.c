#include <stdio.h>
int main()
{
	int n,m=1,i,j=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	m=m*i;
	while(m>=1)
	{
		m=m/10;
		j++;
	}
	printf("%d",j);
	return 0;
}
