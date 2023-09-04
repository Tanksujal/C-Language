#include<stdio.h>
main(){
	const float pi = 3.14;
	float area;
	int r;
	
	printf("enter the value of radius for area of circle = ");
	scanf("%d",&r);
	
	area = pi*r*r;
	
	printf("The area of circle is = %.2f",area);
}
