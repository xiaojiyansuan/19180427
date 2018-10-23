#include<stdio.h>
int main()
{
	unsigned int x=129;
	unsigned int y,z;
	int n=2;
	y=rightrot(x,n);
	z=rightrot_c(x,n);
	printf("%d\n%d",y,z);
	return 0;
}
