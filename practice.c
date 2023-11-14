#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the values of a and b are\n a \n b");
	scanf("%d%d",&a,&b);
	c=a+b;
	b=c-b;
	a=c-a;
	printf("after swapping the values are %d %d",a,b);
	
}
