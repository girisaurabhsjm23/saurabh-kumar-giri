#include<stdio.h>
main()
{
	int a[6]={1,6,5,9,8,3};
	int i;
	int j;
	int hold;
	int n=6;
	
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1]);
				{
					hold=a[j];
					a[j]=a[j+1];
					a[j+1]=hold;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	
	
}
