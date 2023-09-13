#include<stdio.h>
main(){
	
	int a,b,c,d;
	printf("enter your first number = ");
	scanf("%d",&a);
	printf("enter your second number = ");
	scanf("%d",&b);
	printf("enter your third number = ");
	scanf("%d",&c);
	printf("enter your fourth number = ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d is max",a);
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			if(c>b)
			{
				if(c>d)
				{
					printf("%d is max",c);
				}
				else
				{
					printf("%d is max",d);
				}
			}
			else
			{
			    printf("%d is max",d);	
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
			   printf("%d is max",b);	
			}
			else
			{
				printf("%d is max",d);
			}
		}
		else
		{
			printf("%d is max",c);
		}
	}
}
