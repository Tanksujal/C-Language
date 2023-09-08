#include<stdio.h>
main(){
    int x,y,formula;
     printf("enter the value of x = ");
    scanf("%d",&x);
    printf("enter the value of y = ");
    scanf("%d",&y);

    formula = (x*x) + (2*x*y) + (y*y);

    printf("the answer of formula is = %d",formula);
}