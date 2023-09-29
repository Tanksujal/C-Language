#include<stdio.h>
main()
{
    int m,n,sum,i,j,count=0;
    printf("enter first year = ");
    scanf("%d",&m);
    printf("enter second year = ");
    scanf("%d",&n);

    sum = ((m+n)/4)+1;
    int a[sum];
    for(i=m;i<n;i++)
    {
        if(i%2==0)
        {
            a[count] = i;
            count++;
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",a[i]);
    }
}