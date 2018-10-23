#include<stdio.h>
int main()
{
int a,i,sum=0,n;
printf("\n");
scanf("%d%d",&a,&n);
for(i=1;i<=n;i=i+1)
{
sum=sum+a;
a=a*10+a%10;
}
printf("%d\n",sum);
return 0;
}
