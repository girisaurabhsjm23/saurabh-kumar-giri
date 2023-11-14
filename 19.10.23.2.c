#include<stdio.h>
void swap1(int * , int *);
main()
{
	int a=7;
	int b=9;
	swap1(&a,&b);
}
void swap1(int *x, int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("values of a=%d b=%d\n",*x,*y);
}
