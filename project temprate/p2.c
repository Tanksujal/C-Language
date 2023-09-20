#include<stdio.h>
main()
{
	int n,sum,fd,ld;
	sum = 0;
	printf("enter any digit = ");
	scanf("%d",&n);
	
	ld = n % 10;
	while(n>=10)
	{
		n = n / 10;
	}
	fd = n;
	sum = fd + ld;
	printf("the sum is = %d",sum);
}
