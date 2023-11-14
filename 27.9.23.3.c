#include<stdio.h>
main()
{
	int a[5];
	int i;
	int n;
	printf("enter the values of a");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
     scanf("the values are %d",&a[i]);	
	}
	
	printf("the values are \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	
}
	
	

