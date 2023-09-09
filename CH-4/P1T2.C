#include<stdio.h>
main(){
	int salary,HRA,DA,TA;
	printf("enter your salary = ");
	scanf("%d",&salary);
	salary = 1000;
	HRA = salary*10/100;
	DA = salary*5/100;
	TA = salary*8/100;
	salary = salary+HRA+DA+TA;
	printf("your gross salary is = %d",salary);
}
