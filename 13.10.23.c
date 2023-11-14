#include<stdio.h>
main()
{
	int a=6;
	int *aptr;
	aptr=&a;
	printf("value of a is %d\n",a);
	printf("value of a is %u\n",&a);
	printf("value of pointer is %u\n",&aptr);
	printf("value of a is %d\n",*aptr);
	
}
