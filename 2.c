#include<stdio.h>

main()
{
	int n,sum=0;
	printf("enter size of array:");
	scanf("%d",&n);
	
	int a[n],i;

    for(i=0;i<n;i++)
    {
    	printf("enter a[%d]:",i);
    	scanf("%d\n",&a[i]);
	}
	
  	for(i=0 ;i<n;i++)
	{
	  printf("%d",a[i]);
	  sum= sum + a[i];
	  
	  	 
	}
	  printf("\n sum/average is %d",sum);

}	
