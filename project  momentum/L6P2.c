#include <stdio.h>

main()
{
    int a;
    printf("enter number = ");
    scanf("%d",&a);

    (a%2==0)
           ? printf("the number is even")
           : printf("the number is odd");
}