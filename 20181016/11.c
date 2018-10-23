#include <stdio.h>
int main()
{
int a, i, j, k, m, count = 0;
scanf("%d", &a);
for(i = a; i <= a + 3; i++)
for(j = a; j <= a + 3; j++)
if(j != i)
for(k = a; k <= a + 3; k++)
if(k != i && k != j)
{
m = 100 * i + 10 * j + k;
count++;
if(count % 6 == 0)
printf("%d\n", m);
else
printf("%d ", m);
}
return 0;
}
