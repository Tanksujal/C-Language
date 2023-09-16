#include<stdio.h>

main()
{
	int n,i;
	int f=0;
	int s=1;
	int t = f + s;
	printf("enter a number = ");
	scanf("%d",&n);
	printf("%d\n%d\n",f,s);
	for(i=3;i<=n;i++)
	{
	   printf("%d\n",t);
	   f=s;
	   s=t;
	   t=f+s;
	}
}
