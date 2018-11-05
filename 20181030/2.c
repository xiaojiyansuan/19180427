#include<stdio.h>
void print_hex(int a)
{
	printf("%x\n",a);
	return;
}
int main()
{
	int a;
	printf("请输入数字: ");
	scanf("%d",&a);
	print_hex(a);
	return 0;
}
