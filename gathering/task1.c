#include<stdio.h>
main()
{
	printf("press 1 for +\n");
	printf("press 2 for -\n");
	printf("press 3 for *\n");
	printf("press 4 for /\n");
	printf("press 5 for % \n");	
	printf("press 0 for exit\n\n");
	data();
}
int data()
{
	int no,n1,n2;
	printf("enter your choice = ");
	scanf("%d",&no);
	if(no==0)
	{
		printf("not valid number");
	}
	else
	{
	printf("enter first number = ");
	scanf("%d",&n1);
	printf("enter second number = ");
	scanf("%d",&n2);
	switch(no)
	{
		case 1: sum(n1,n2);
				break;
		case 2: min(n1,n2);
				break;
		case 3:mul(n1,n2);
				break;
		case 4: div(n1,n2);
				break;
		case 5: mod(n1,n2);
				break;
		default :printf("this choice is uncorrect choice");
	}
	}
	
}
int sum(int n1,int n2)
{
	int sum;
	sum = n1 + n2;
	printf("sum is = %d",sum);
}
int min(int n1,int n2)
{
	int min;
	min = n1 - n2;
	printf("min is = %d",min);
}
int mul(int n1,int n2)
{
	int mul;
	mul = n1 * n2;
	printf("multipication is = %d",mul);
}
int div(int n1,int n2)
{
	int div;
	div = n1 / n2;
	printf("division is = %d",div);
}
int mod(int n1,int n2)
{
	int mod;
	mod = n1 % n2;
	printf("module is = %d",mod);
}

