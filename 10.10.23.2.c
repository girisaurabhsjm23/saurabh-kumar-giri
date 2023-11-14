#include<stdio.h>
main()
{
	int arr[]={1 ,2 ,3 ,4 ,5 };
	int n=5;
	int i=0;
	int index=3;
	int value=9;
	printf("printing the elements of the array after insertion\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=index;i>=n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
{

		printf(" printing the elements of the array after insertion\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
	
}
