#include<stdio.h>

	struct student
	{
		int reg;
		int marks[10];
	}s1;
main()
{
	int i;
	s1.reg=1;
	
		for(i=0;i<10;i++)
		{
			scanf("%d",&s1.marks[i]);
			
		}
		printf("the marks are %d",s1);
		for (i=0;i<10;i++)
		{
			printf("%d \n",s1.marks[i]);
		}
		
	
}
	

