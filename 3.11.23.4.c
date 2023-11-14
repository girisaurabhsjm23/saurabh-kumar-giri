#include<stdio.h>
#include<string.h>
main()
{
char x[100];
int i=0;
printf("enter string\n");
get(x);
while(x[i]!='\0')
{
	if (x[i]=='')
	{
		x[i]='$';
	}
	i++
}

}
