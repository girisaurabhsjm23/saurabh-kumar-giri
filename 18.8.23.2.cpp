#include<stdio.h>
main()
{
	int a=5,b=5,c=10 , d;
	d=(a==b)&&(c>b);
	printf("the (a==b) &&(c>b) = %d\n",d);
	d=(a!=b)&&(c>b);
	printf("the (a!=b) &&(c>b) = %d\n",d);
}
