#include<stdio.h>
#include<string.h>
main()
{
	char s1[40]="MALYALAM";
	int i,j;
	char temp;
	i=0;
	j=strlen(s1)-1;
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		i++;
		j--;
	}
	printf("%s",s1);
}
