#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,mod;
scanf("%d %d %d",&a,&b,&c);
a=a%c;
d=a;
for(int i=1;i<=b-1;i++){d=d*a;
d=d%c;
}
	printf("%d\n",d%c);
	return 0;
}
