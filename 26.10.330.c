//malloc
#include<stdio.h>
#include<stdio.h>
main()
{
	int *p, n, i;

printf("enter the no. of integers to be used");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p=NULL)
{
	printf("no memotry available");
	exit(1);
	}
	else
	{	
	 printf("memory allocation was succuessful");
	 printf("enter the values");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",p+i);
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",*(p+i));
	 }
}
}
	
