#include<stdio.h>
main()
{
	int g;
	int a=10,b=5,c;
	printf("enter your choice of character");
	scanf("%d",&g);
	switch(g)
	{
		case 1:
			printf("your choice is addition");
			c=a+b;
			printf("addition is %d",c);
			break;
		case 2:
			printf("your choice is subtraction);
			c=a-b;
			printf("addition is %d",c);
			break;
			
			default:
				printf("your choice is not available");
			
			
		
		}	
}
