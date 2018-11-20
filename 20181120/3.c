#include <stdio.h>
int sum(int n)
{
       int ans = n;
        ans && (ans+= sum(n-1));
        return ans;
    }
int main()
{
int n,a;
scanf("%d",&n);
a=sum(n);
printf("%d",a);
return 0;
}
