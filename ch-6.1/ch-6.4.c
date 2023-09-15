#include<stdio.h>

main(){
	
	int n ,n1;
	printf("enter year = ");
	scanf("%d",&n);
	printf("enter year = ");
	scanf("%d",&n1);
	
	while(n<=n1)
	{ 
		
		printf("%d\n",n);
		n = n+4;
	}
}
