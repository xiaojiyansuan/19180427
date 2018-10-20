#include <stdio.h>
int main()
{
	int a;
	unsigned int b;
	short int c;
	unsigned short int d;
	float e;
	double f;
	char g;
	
	printf("int size=%d\n",sizeof(a));
    printf("unsigned int size=%d\n",sizeof(b));
    printf("short int size=%d\n",sizeof(c));
    printf("unsigned short int size=%d\n",sizeof(d));
    printf("float size=%d\n",sizeof(e));
    printf("double size=%d\n",sizeof(f));
    printf("char size=%d\n",sizeof(g));

	return 0;
}
