#include <stdio.h>
#include <math.h>
int is_prime(int n);
int main()
{
	int i,n=0;
	for(i=2;;i++)
	{
		if (is_prime(i)==0)
		{
			n++;
			if(n>=100&&n<=1000)
				printf("%d ",i);
		}
		if(n>1000)
			break;
	}
	return 0;
}


int is_prime(int n)
{
	int i,k,m;
	k=sqrt(n);
	for (i=2;i<=k;i++)
	{
		if (n%i==0)
			break;
	}
	if (i<=k)
		m=-1;
	else
		m=0;
	return m;
}
