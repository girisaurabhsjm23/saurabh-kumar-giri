#include<stdio.h>
main()
{
	int i,n,fact=1;
	int *pn, *pfact;
	pn=&n;
	pfact=&fact;
	*pn=5;
	
	for(i=1;i<=*pn;i++)
	{
		*pfact=*pfact*i;
	}
	printf("the factorial value is %d",*pfact);
}
