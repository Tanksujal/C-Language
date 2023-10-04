#include<stdio.h>
main()
{
	int a[50],i,n;
	printf("enter array size = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter array element = ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("\nthe negative array element is = %d",a[i]);
		}
	}
}
