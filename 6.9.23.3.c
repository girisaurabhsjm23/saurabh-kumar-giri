#include<stdio.h>
main()
{
	int a=10, b=20, c=30;
	
	if(a>b)
	{
		if (a>c)
		{
			printf("a is greatest");
		}
		else
		{
			printf("c is greater");
			
		}
	}
	else 
	{
		if (b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf(" c is greater");
			
		}
		
	}
	
}
