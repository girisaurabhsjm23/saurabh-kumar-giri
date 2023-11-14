#include<stdio.h>
main()
{
	int a[]={10,2,3,4,5};
	int p;
	p=a;
	int i;
	for(i=0;i<5;i++)
	printf("%d\n",*(a+i));
}
