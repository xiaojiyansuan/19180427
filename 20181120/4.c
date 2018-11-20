#include<stdio.h>
int add(int n1, int n2)
{
int sum,mark;
do{
            sum = n1^n2;
            mark = (n1&n2)<<1;
            n1=sum;
            n2=mark;
        }
while(n2!=0);
        return n1;
}
int main()
{
int n1,n2,s;
scanf("%d %d",&n1,&n2);
s=add(n1,n2);
printf("%d",s);
return 0;
}
