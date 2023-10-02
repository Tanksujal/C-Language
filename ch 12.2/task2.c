#include<stdio.h>
main()
{
	int m,n,i,j;
	printf("enter the size of row = ");
	scanf("%d",&m);
	printf("enter the size of column = ");
	scanf("%d",&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the size of first array element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the size of second array element = ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
