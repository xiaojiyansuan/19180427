#include<stdio.h>
int is_pow2(int n)
{
while(n%2==0)
n=n/2;
if(n==1)
return 0;
else
return -1;
}
int main()
{
	int n;
        printf("请输入一个整数: ");
	scanf("%d",&n);
	is_pow2(n);
}
