#include<stdio.h>

main ()
{
	
	int n,i,table;

	printf("enter any number for table :---- ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		table = n*i;
		printf("%d x %d = %d\n",n,i,table);
	}
	
	
}
