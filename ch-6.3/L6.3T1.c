#include<stdio.h>
main()
{
	int n,i,sum;
	sum = 0;
	printf("enter any number for sum :-  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	 
	}
	
	printf("the sum is :---- %d",sum);
}
