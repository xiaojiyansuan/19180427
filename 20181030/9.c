#include <stdio.h>
int is_int_pal(int n);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",is_int_pal(a));
	return 0;
}


int is_int_pal(int n)
{
	int y=0,m,x,i;
	x=n;
	while(n!=0)
	{
		m=n%10;
		n=(n-m)/10;
		y=y*10+m;
	}
	if(y==x)
		i=0;
	else
		i=-1;
	return i;
}
