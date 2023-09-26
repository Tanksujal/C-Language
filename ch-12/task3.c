#include<stdio.h>
main()
{
	int n;
	printf("enter array size = ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int i;
	for(i=0;i<=n-1;i++)
	{
		printf("enter the value of a = ");
		scanf("%d", &a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("enter the value of b = ");
		scanf("%d", &b[i]);
	}
	
	for(i=0;i<=n-1;i++)
	{
		c[i] = a[i] + b[i];
		printf("the addition of a and b is  = %d\n",c[i]);
	}
	
	
	
}
