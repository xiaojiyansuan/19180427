#include<stdio.h>
int main()
{
	int a,b1,b2,b3;
	scanf("%d",&a);
	b1=a%10*100;
	b2=a/10%10*10;
	b3=a/100;
	printf("%d\n",b1+b2+b3);
	return 0;
}
