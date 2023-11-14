#include<stdio.h>
extern int n=9;
int y=8;
void mystatic();
main()
{
	int w;
	static int d;
	register int x=7,m;
	auto int k;
k=y*y;
printf("value of k is %d",k);
m=x*x;
printf("\nvalue of m is %d",m);
mystatic();
mystatic();
mystatic();
printf("\nvalue of static variable inside fun is %d",n);
}
mystatic()
{
	static int j=5;
	printf("\nvalue of staic variable inside function is %d",j);
	j++;
	printf("\nvalue of static variabble inside fun is %d",n);
	n++;
	
}
