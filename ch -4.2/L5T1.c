#include<stdio.h>
main(){
	int a,b,c;
	printf("enter your first number = ");
	scanf("%d",&a);
	printf("enter your second number = ");
	scanf("%d",&b);
	printf("enter your third number = ");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(b<c)
		{
			printf("%d is min",b);
		}
		else{
			printf("%d is min",c);
		}
	}
	else{
		if(a<c)
		{
			printf("%d is min",a);
		}
		else
		{
			printf("%d is min",c);
		}
	}
}
