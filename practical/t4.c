#include<stdio.h>
main()
{
    int a[5];
    int i;
    int max,smax;
    for(i=0;i<5;i++)
    {
        printf("enter array element = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax)
        {
            smax=a[i];
        }
    }
    printf(" this is a max number = %d\n",max);
    printf("this is second max number = %d",smax);
    
}