#include<stdio.h>
main(){
	int salary,HRA,DA,TA;
	printf("enter your salary = ");
	scanf("%d",&salary);
	printf("enter your HRA = ");
	scanf("%d",&HRA);
	printf("enter your DA = ");
	scanf("%d",&DA);
	printf("enter your TA = ");
	scanf("%d",&TA);
	HRA = salary*HRA/100;
	DA = salary*DA/100;
	TA = salary*TA/100;
	salary = salary+HRA+DA+TA;
	printf("your gross salary is = %d",salary);
}
