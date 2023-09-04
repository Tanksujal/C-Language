#include<stdio.h>

main(){
	int a,b,add,sub,mul,div,mod; 
	
	a = 10;
	b = 5;
	
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    
    
	printf("Addition of %d and %d = %d\n",a,b,add);
	
	printf("substraction of %d and %d = %d\n",a,b,sub);
	
	printf("multiplication of %d and %d = %d\n",a,b,mul);
	
	printf("division of %d and %d = %d\n",a,b,div);
	
	printf("module of %d and %d = %d\n",a,b,mod);
	
}
