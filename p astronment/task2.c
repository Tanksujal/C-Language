#include<stdio.h>
main()
{
	int a[50];
	int i,n;
	printf("enter array size = ");
	scanf("%d",&n);
	//5
	for(i=0;i<n;i++)
	{
		  printf("enter array element = ");
		  scanf("%d",&a[i]);
	}
	printf("\nthe reverse order is \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]); 
	}
}
