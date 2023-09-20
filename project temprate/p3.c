#include<stdio.h>
main()
{
    char n;
    n = 'a';
    do
    {
        printf("%c ",n);
        n = n + 4;
    } while (n<='z');
    
}