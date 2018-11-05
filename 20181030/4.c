#include<stdio.h>
int count1_in_bin(int n)
{ int count=0;
while(n>=1)
{ 
if((n%2)!=0)
 count++;
 n=n/2;
 }
return count;
 }
int main()
{
	int n;
	printf("请输入一个整数: ");
	scanf("%d",&n);
	int count1_in_bin(int n);
}
