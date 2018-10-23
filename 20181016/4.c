#include<stdio.h>
int main()
{
	int sum,i,term;
	sum=0;
	term=1;
	for(i=1;i<=10;i++)
		term=term*i;
	sum=sum+term;
	printf("%d\n",sum);
	return 0;
}
