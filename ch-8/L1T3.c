#include<stdio.h>

main()
{
	int n,i;
	printf("enter a number = ");
	scanf("%d",&n);
    i=2;
	do
	{
	  if(i%2==0)
	  {
	  	printf("%d\n",i);
	  	i = i+2;
	  }
	  
	}
	while(i<=n);
}
