//write programme sum of number
#include<stdio.h>
#include<conio.h>
// write a programme to sum 1 to n
void main()
{
int n,i,s=0;
clrscr();

printf("\n Enter number of element: ",n);
scanf("%d",&n);

for(i=1;i<=n;i++)
{
s=s+i;
}

printf("\n Sum of number is : %d",s);
getch();
}