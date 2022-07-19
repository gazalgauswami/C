//odd number

#include<stdio.h>

void main()
{
    int n,i;

    printf("\n Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        continue;
        printf("\n Odd number: %d",i);
    }
}