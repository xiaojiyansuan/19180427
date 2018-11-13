#include<stdio.h>
int A(int n);
int main()
{
	int n;
        printf("请输入n(1<=n<=25): ");
	scanf("%d",&n);
        if(n>=1&&n<=25)
		printf("%d\n",A(n));
	else
		printf("输入错误\n");
	return 0;
}
int A(int n)
{
	if(n==1)
        return 2;
        else if(n==2)
        return 6;
        return 2*A(n-1)+2;
}
