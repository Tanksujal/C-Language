#include<stdio.h>

main(){
	
	int n,i;
	printf("enter your number = ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		
		printf("%d\n",n);
		n = n-2;
	}
}
