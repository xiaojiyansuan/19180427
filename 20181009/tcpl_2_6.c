#include<stdio.h>
int main()
{
	unsigned int x=0x22,y=0x55;unsigned int m;
	m=sebits(x,4,3,y);
	printf("m=%x",m);
	return 0;
}
