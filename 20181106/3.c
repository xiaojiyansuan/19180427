#include<stdio.h>
int F(int N);
int main()
{
int N;
scanf("%d",&N);
printf("F(N)=%d\n",F(N)%100007);
return 0;
}
int F(int N)
{
if(N==2)
return 1;
else if(N==3)
return 2;
return F(N-1)+F(N-2);
}
