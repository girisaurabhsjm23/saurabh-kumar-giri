#include<stdio.h>
main()
{
	int a[3][3], b[3][3], c[3][3],i,j;
	printf("enter the elements in the first array");
	for(i=0;i<3;i++) //for rows
	{
		for(j=0;j<3;j++)
		{
		    scanf("%d",a[i][j]);	
		}
	}
	printf("enter the elements in the second array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
	printf("the sum of the elements of the array are");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\n%d",c[i][j]);
		}
	}
	
}
