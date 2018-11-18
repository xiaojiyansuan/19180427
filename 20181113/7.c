#include<stdio.h>
#include<string.h>
void fun(int n,int sum[])
{
	int temp,i;
	for(i=0;i<n;i++)
	{
		temp=sum[i];
		sum[i]=temp%10;
		sum[i+1]+=temp/10;
	}
	if(sum[i]!=0)
	{
		n++;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",sum[i]);
	}
printf("\n");
}
int main()
{
	int len1,len2,a,b,k=0;
	char num1[1050],num2[1050];
	int sum[1100];
	memset(sum,0,sizeof(sum));			
	scanf("%s%s",num1,num2);
	len1=strlen(num1);
	len2=strlen(num2);
	a=len1-1;
	b=len2-1;
	while(a>=0 || b>=0)
	{
		if(a<0)
		{
			sum[k]=num2[b]-'0';
			k++;
			b--;
		}
		else if(b<0)
		{
			sum[k]=num1[a]-'0';
			k++;
			a--;
		}
		else
		{
			sum[k]=num1[a]-'0'+num2[b]-'0';
			k++;
			b--;
			a--;
		}
	}
	if(len1>len2)
		{
		fun(len1,sum);
	}
	else if(len1<len2)
	{
		fun(len2,sum);
	}
	else
	{
		fun(len1,sum);
	}
	return 0;
}


#include<stdio.h>
#include<string.h>
void fun(int n,int sum[])
{
	int temp,i;
	for(i=0;i<n;i++)
	{
		temp=sum[i];
		sum[i]=temp%10;
		sum[i+1]+=temp/10;
	}
	if(sum[i]!=0)
	{
		n++;
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",sum[i]);
	}
printf("\n");
}
int main()
{
	int len1,len2,a,b,k=0;
	char num1[1050],num2[1050];
	int sum[1100];
	memset(sum,0,sizeof(sum));			
	scanf("%s%s",num1,num2);
	len1=strlen(num1);
	len2=strlen(num2);
	a=len1-1;
	b=len2-1;
	while(a>=0 || b>=0)
	{
		if(a<0)
		{
			sum[k]=num2[b]-'0';
			k++;
			b--;
		}
		else if(b<0)
		{
			sum[k]=num1[a]-'0';
			k++;
			a--;
		}
		else
		{
			sum[k]=num1[a]-'0'+num2[b]-'0';
			k++;
			b--;
			a--;
		}
	}
	if(len1>len2)
		{
		fun(len1,sum);
	}
	else if(len1<len2)
	{
		fun(len2,sum);
	}
	else
	{
		fun(len1,sum);
	}
	return 0;
}
