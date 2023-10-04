#include<stdio.h>
//two matrix are equal
main()
{
	int m,n,m1,n1,equal =1,i,j;
	printf("enter first matrix row = ");
	scanf("%d",&m);
	printf("enter first matrix column = ");
	scanf("%d",&n);
	printf("enter second matrix row = ");
	scanf("%d",&m1);
	printf("enter second matrix column = ");
	scanf("%d",&n1);
	int a[m][n],b[m1][n1];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter first array element = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("enter second array element = ");
			scanf("%d",&b[i][j]);
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
	printf("\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	if(m==m1 & n==n1)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n1;j++)
			{
			    if(a[m][n] != b[m1][n1])
			    {
			    	equal = 0;
			    	break;
				}
			}
		}
	}
	else
	{
		printf("this matrix row and column ara not equal");
	}
	
	if(equal == 1)
	{
		printf("this matrix is equal");
	}
	else
	{
		printf("this matrix is not equal");
	}
}
