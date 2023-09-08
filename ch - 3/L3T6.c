#include<stdio.h>
main(){
     int x,y,z,formula;
     printf("enter the value of x = ");
    scanf("%d",&x);
    printf("enter the value of y = ");
    scanf("%d",&y);
    printf("enter the value of z = ");
    scanf("%d",&z);

    formula = (x*x) + (y*y) + (z*z) + (2*x*y) +  (2*y*z) + (2*z*x);

    printf("the answer of formula is = %d",formula);
}