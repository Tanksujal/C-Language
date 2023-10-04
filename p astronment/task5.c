#include<stdio.h>
//diagonal matrix
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
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
		printf("\n");
	}
	printf("the sum is = %d",sum);
}
