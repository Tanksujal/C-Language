#include<stdio.h>
main(){
	int n;
	printf("enter your number = ");
	scanf("%d",&n);
	
	if(n>0){
		printf("this number is positive");
	}
	else if(n<0)
	{
		printf("this number is negative");
	}
	else if(n==0)
	{
		printf("this number is  Neutral");
	}
}
