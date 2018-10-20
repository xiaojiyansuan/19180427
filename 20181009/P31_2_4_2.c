#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x;
	scanf("%d%d%d%d",&a,&b,&c,&x);
	printf("a=%d,b=%d,c=%d,x=%d\n",a,b,c,x);
	if (!(sqrt(fabs(x))!=4*a/(b*c)))
	{printf("fase\n");}
	else {printf("true\n");}
	return 0;
}
