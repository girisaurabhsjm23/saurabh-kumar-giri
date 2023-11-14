#include<stdio.h>
main()
{
	int x=10, b=9;
	char c='A';
	void *ptr;
	ptr=&x;
	printf("the value of generic pointer is %d\n", *(int*)ptr);
	ptr=&c;
	printf("the value of generic pointer is %c",*(char*)ptr);
	
}
