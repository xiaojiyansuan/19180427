#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
main()
{
	int a,b;
	a=21;
	b=invert(a,4,3);
	printf("%d\n",b);
	return 0;
}
