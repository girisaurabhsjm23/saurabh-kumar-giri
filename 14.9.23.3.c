#include<stdio.h>
int a =10;
main()

{
	printf("value of a inside main %d",a );
	{
	int a=90;
	printf("\nvalue of a inside neted block %d",a);
		
	}	
}
