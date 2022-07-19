
#include<stdio.h>

main()
{
    int n,i,j,s;

    printf("\n Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf(" %d ",s);
        }
        printf(" \n");
    }
}