#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	struct tudent
	{
		char name[15];
		char id_number[15];
		int mark;
	};
	
	int i = 0;
	struct tudent student[n];
	for(i = 0;i<n;i++)
	{
		scanf("%s %s %d",&student[i].name,&student[i].id_number,&student[i].mark);
	}
	
	int max_number =0,min_number = 0;
	for(i = 0;i<n;i++)
	{
		if(student[i].mark>student[max_number].mark)
			max_number = i;
		if(student[i].mark<student[min_number].mark)	
			min_number = i;
	}
	
	printf("%s %s \n",student[max_number].name,student[max_number].id_number);
	printf("%s %s \n",student[min_number].name,student[min_number].id_number);		
		
	return 0;
} 

