#include <stdio.h>
int LCM(int m, int n);
int GCD_iterative(int m, int n);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",LCM(a,b));
	return 0;
}


int LCM(int m, int n)
{
	int x;
	x=GCD_iterative(m,n);
	return (m*n/x);
}


int GCD_iterative(int m, int n)
{
	int a;
	while(n!=0)
	{
		a=n;
		n=m%n;
		m=a;
	}
	return m;	
}
