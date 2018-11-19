#include<stdio.h>

int my_strlen(char*a);
int main ()
{
	char str[1000];
	scanf("%s",str);
	
	printf("%d",my_strlen(str));
	return 0;
} 
int my_strlen(char*a)
{
	int number = 0;
	while((*a++)!=0)
		number++;
		
	return number;		
}
