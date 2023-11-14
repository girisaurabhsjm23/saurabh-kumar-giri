#include<stdio.h>
main()
{

    int a, b;
    scanf("%d%d",&a , &b);
	int addition, subtraction, multiplication, division, modulus;
	addition=a+b;
	subtraction=a-b;
	multiplication=a*b;
	division=a/b;
	modulus=a%b;
	printf("%d",addition);
	printf("\n%d",subtraction);
	printf("\n%d",multiplication);
	printf("\n%d",division);
}
