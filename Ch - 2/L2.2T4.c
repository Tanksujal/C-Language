#include<stdio.h>

main(){
	int P;
	float R,T, Interest;
	
	printf("Enter the value of principal amount = ");
	scanf("%d",&P);
	printf("Enter the value of Rate = ");
	scanf("%f",&R);
	printf("Enter the time of amount = ");
	scanf("%f",&T);
	
	 Interest = (P*R*T)/100;
	 
	 printf("The interset is = %f",Interest);
	
}
