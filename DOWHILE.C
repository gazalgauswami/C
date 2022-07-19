// write programme to do while

#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

printf("\n Enter Number : ",n);
scanf("%d",&n);
i=1;
do{ sum=sum+i;
i=i+1;
}
while(i<=n);

printf("\n Sum of Number is: %d",sum);
getch();
}