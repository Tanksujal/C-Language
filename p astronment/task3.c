#include<stdio.h>
main()
{
	int a[50];
	int i,n,sum=0;
	printf("enter array size = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter array element = ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	printf("the sum of array element is = %d",sum);
}
