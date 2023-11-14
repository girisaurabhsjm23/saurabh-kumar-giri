#include<stdio.h>
#include<string.h>
main()
{
	int a=123;
	char str[20];
	
	itoa(a,str,8);
	printf("%s",str);
}
