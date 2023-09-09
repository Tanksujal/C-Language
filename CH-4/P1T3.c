#include<stdio.h>
main(){
	int fa,sa,ta;
	printf("enter first angle of traingle = ");
	scanf("%d",&fa);
	printf("enter second angle of traingle = ");
	scanf("%d",&sa);

	
	ta = 180 - fa - sa;
   
	
	printf("the value of third triangle angle is = %d",ta);
}

