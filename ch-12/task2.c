#include<stdio.h>
main()
{
	int array[50];
	int i,n,sum=0,length=0,average;
	
	printf("enter the size of array = ");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("enter the value of array = ");
		scanf("%d",&array[i]);
		sum = sum + array[i];
		length++;
	}
	
	average = sum/length;
	
	printf("the average of array is = %d",average);	
	
	
}
