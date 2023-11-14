#include<stdio.h>
#include<string.h>
main()
{
	char x[200];
	int i =0;
	printf("enter the string");
	gets(x);
	while(x[i]!='\0')
	{
		i++;
	}
	printf("lenght of the string is: %d",i);
}
