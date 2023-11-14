#include<stdio.h>
main()
{
	int arr[10];
	int i, loc=-1,key,n=5;     // n=no. of array
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
key=3; //value we want to search
for(i=0;i<n;i++)
{
	if ( arr[i]==key )
	{
	
	
	loc=i;
	printf("%d",i+1);
	break;
}
}
if (loc!=-1)
{
	printf("\n element found %d",loc+1);
	
}
else 
{
	printf("\n element not found");
}




}

