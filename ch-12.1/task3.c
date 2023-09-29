#include<stdio.h>
main()
{
    int n,i;
    printf("enter any array size = ");
    scanf("%d",&n);
    int a[n];
    int mul[n];
    for(i=0;i<n;i++)
    {
        printf("enter array value for square = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        mul[i] = a[i]*a[i];
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\n",mul[i]);
    }
}