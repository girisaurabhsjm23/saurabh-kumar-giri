#include<stdio.h>
main()
{
 int a[10],n,beg,last,mid,i,loc=-1,key;
 n=7;
 key=5;
 beg=0;
 last=n-1;
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);	
 }
 while(beg<=last)
 {
 	mid=(beg+last)/2;
 	if(a[mid]==key)
 	{
 		loc=mid+1;
 		break;
	 }
	 else if(a[mid]>key)
	 {
	 	last=mid-1;
	 }
	 else if(a[mid]<key)
	 {
	 	beg=mid+1;
	 }
 	
 }
    (loc!=-1)
    {
    	printf("element found in %d",loc+1);
	}
	else
	{
		prinf("element not found")
	}
 	
}
