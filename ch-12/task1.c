#include<stdio.h>
main()
{
	int marks[50];
	int i,n,length=0;
	
	printf("enter array size = ");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("enter the value of array = ");
		scanf("%d",&marks[i]);
		length++;
	}
	
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",marks[i]);
	}
	
	printf("the length of array is = %d",length);
}
