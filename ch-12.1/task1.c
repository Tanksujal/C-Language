#include<stdio.h>
main()
{
    int m,n,i,sum,j;
    printf("enter first array size = ");
    scanf("%d",&m);
    printf("enter second array size = ");
    scanf("%d",&n);
    sum = m+n;
    int a[m];
    int b[n];
    int c[sum];
    for(i=0;i<m;i++)
    {
        printf("enter the value of first array = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("enter the value of second array = ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        c[i] = a[i];
    }
    for(i=0,j=m;i<n && j<sum;i++,j++)
    {
        c[j] = b[i];
    }
    for(i=0;i<sum;i++)
    {
        printf("%d",c[i]);
    }
}