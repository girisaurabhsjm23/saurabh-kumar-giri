#include<stdio.h>
main()
{
	int n;
	for(n=2;n<=6;n++)
	{
		if(n%2==1)
		{
		 goto abc;
		}
		abc:
			printf("\nchange the value");
		printf("%d",n);
		
}

}
