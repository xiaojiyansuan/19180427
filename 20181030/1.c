#include<stdio.h>
void triangle_judge()
{
        int a, b, c;
        printf("请输入三角形三条边边长a,b,c: ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{if(a==b&&b==c)
		printf("等边三角形");
		else if(a!=b&&b!=c&&c!=a)
			printf("普通三角形");
		else
			printf("等腰三角形");}
	else
		printf("否");
}
int main()
{
triangle_judge();
return 0;
}
