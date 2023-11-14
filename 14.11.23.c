#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]="cbum is dad";
	int i,j,k,l;
	i=strlen(s1);
	j=strupr(s1);
	k=strrev(s1);
	l=strlwr(s1);
	printf("%d\n%s\n%s\n%s\n",i,strupr(s1),strrev(s1),strlwr(s1));
}
	
