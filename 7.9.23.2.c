#include<stdio.h>
main()
{
	int a=5;
	if (a<=10)
	{
		goto m;
	}
	if (a<=5)
	{
		goto n;
	}
	m:
		{
			printf("\nleader");
		}
	n:
		{
			printf("\nnot leader");
		}




}
