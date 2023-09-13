#include<stdio.h>

main(){
	int a,b,c;
	
	printf("enter number of a = ");
	scanf("%d",&a);
	printf("enter number of b = ");
	scanf("%d",&b);
	printf("enter number of c = ");
	scanf("%d",&c);
	
	(a<b)
	   ? (a<c)
	        ? printf("%d is min",a)
	        : printf("%d is min",c)
	   : (b<c)
	        ? printf("%d is min",b)
	        :printf("%d is min",c);
}
