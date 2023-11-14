//sum of all the elem of an arr. using pointers
#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5};
	int b;
	int c;
	for(b=0;b<5;b++)
	c=*(a+b);
	printf("%d",c);
	
}
