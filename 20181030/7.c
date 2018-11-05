#include <stdio.h>
int GCD_iterative(int m, int n);//循环
int GCD_recursive(int m, int n);//递归
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("循环算法：%d\n",GCD_iterative(a,b));
	printf("递归算法：%d\n",GCD_recursive(a,b));
	return 0;
}

//循环
int GCD_iterative(int m, int n)
{
	int a;
	while(n!=0)
	{
		a=n;
		n=m%n;
		m=a;
	}
	return m;	
}

//递归
int GCD_recursive(int m, int n)
{
	if(m%n==0)
	   return n;
	return(GCD_recursive(n, m%n));
}

