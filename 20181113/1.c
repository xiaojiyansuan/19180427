#include<stdio.h>
int is_sorted(int arr[], int left, int right)
{
int i;
for(i=left;i<=right-1;i++)
{
if(arr[i]>arr[i+1])
printf("非严格单调递增");
break;
if(arr[i]<=arr[i+1])
printf("是严格单调递增");
}
}
int main()
{
    int j;
    int arr[5];
    for(j=0;j<5;j++)
    {
         scanf("%d",&arr[j]);
    }
int left,right;
scanf("%d %d",&left,&right);
int is_sorted(int arr[5], int left, int right);
return 0;
}
