#include<stdio.h>
main()
{
	int m,n,i,j,sum=0,length=0,avr;
	printf("enter the size of row = ");
	scanf("%d",&m);
	printf("enter the size of column = ");
	scanf("%d",&n);
	
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the size of array element = ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum = sum + a[i][j];
			length++;
		}
		printf("\n");
	}
	avr = sum/length;
	printf("the array element sum is = %d",avr);
}
