#include<stdio.h>
int f(int N)
{
while(N%2==0)
{
N=N/2;
}
return N;
}
int main()
{
int N,a,sum=0;
scanf("%d",&N);
for(;N>=1;N--)
{
a=f(N);
sum=sum+a;
}
printf("%d\n",sum);
return 0;
}
