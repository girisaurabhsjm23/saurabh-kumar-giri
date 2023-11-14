#include<stdio.h>
main()
{
	int a;
	printf("enter the no.");
	scanf("%d",&a);
	for(int b=2;a>=b;b+=2);
	{
		printf("%d",b);
	}
}
