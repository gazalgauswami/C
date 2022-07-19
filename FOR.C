//for

#include<stdio.h>

main()
{
    int n,i,sum=0;

    printf("\n Enter a number: ",n);
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        
    }

    printf("\n sum of the number:%d ",sum);


}