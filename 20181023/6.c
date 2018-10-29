#include <stdio.h>
int main()
{
int A,B,C;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
if(A==B)
{
if(A!=C)
{
putchar('C');
}
}
else if(A==C)
{
if(A!=B)
{
putchar('B');
}
}
else
{
if(B==C)
{
putchar('A');
}
}
return 0;
}

