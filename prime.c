//prime number or not

#include<stdio.h>

main()
{
    int n,i,p=0;

    printf("\n Enter a number: ");
    scanf("%d",&n);

    for(i=2;1<n;i++)
    {
        if(n%i==0)
        p=1;
        break;
    }

    if(p==0)
    printf("\n %d is a prime number",n);

    else
    printf("\n %d is not a prime number",n);
}