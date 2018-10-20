#include<stdio.h>
int main()
{
    int i,j,k,n=0;
    for(i=1;i<=97;i=i+2)
     {
         j = i+1;
         k = i+2;
         n+=i*j*k;
     }
     printf("%d\n",n);
}

