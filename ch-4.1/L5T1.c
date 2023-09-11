#include<stdio.h>
main(){
	int num1,num2;
	printf("enter your first number = ");
	scanf("%d",&num1);
	printf("enter your second number = ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("your minimum number is = %d",num2);
	}
	else
	{
		printf("your minimum number is = %d",num1);
	}
}
