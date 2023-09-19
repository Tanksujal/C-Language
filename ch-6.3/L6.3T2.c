#include<stdio.h>
main()
{
	int n,i,fac;
	fac = 1;
	printf("enter any number for factorial :-  ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac = fac * i;
	}
	
	printf("the factorial  is :---- %d",fac);
}
