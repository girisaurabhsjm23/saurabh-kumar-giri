#include<stdio.h>
main()
{
int smallest;
int arr[6];
int i;
printf("enter the elements\n");
for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
printf("\n show the elements\n");

for (i=0;i<5;i++)
{
	printf("\n the elements is %d", arr[i]);
}
smallest=arr[0];
for(i=0;i<5;i++)
{
	if (arr[i]>smallest)
	{
		smallest=arr[i];
	}
	
}
printf(" \n%d the smallest no. is ",smallest);

}
