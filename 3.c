#include<stdio.h>

main()
{
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;

    for(i=0;i<n;i++)
    {
    	printf("enter a[%d]:",i);
    	scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
    	
	}
	printf("\n");
	
	for(i=0 ;i<n;i++)
	{
	  
	  	printf("enter b[%d]:",i);
    	scanf("%d\n",&b[i]);
	}
	for(i=0;i<n;i++);
	{
			printf("%d",b[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
	

}	
