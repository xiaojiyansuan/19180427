#include<stdio.h>
int BinomialCoefficient(int n, int k)
{
	if(n<k)
		return -1;
	else if(n==k||!k)
		return 1;
	else
		{
if(n==1&&k==1)
return 1;
else if(n==2&&k==1)
return 2;
else if(n==3&&k==1)
return 3;
else if(n==3&&k==2)
return 3;
return BinomialCoefficient(n-1,k-1)+BinomialCoefficient(n-1,k);
}
}
int main()
{
int n,k;
scanf("%d %d",&n,&k);
printf("%d",BinomialCoefficient(n,k));
return 0;
}
