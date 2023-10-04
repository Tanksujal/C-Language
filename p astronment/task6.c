#include<stdio.h>
//transponse
main()
{
	int m,n,i,j,sum=0;
	printf("enter the size of row = ");
	scanf("%d",&m);
	printf("enter the size of column = ");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter array element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nthe after transponse = \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
}
