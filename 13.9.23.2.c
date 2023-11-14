#include<stdio.h>
int fact1(int);
main()
{
	int a =10;
	printf("factorial is : %d",addn(a));
}
int addn(int x)
{
	if (x==0)
	return 0;
	else 
	return  x+addn(x+1);
}
