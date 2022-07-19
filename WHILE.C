//sum of the number by using while

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,n,sum=0;
 clrscr();

 printf("\n Enter a number : ");
 scanf("%d",&n);

 i=1;
 while(i<=n)
 {
  sum=sum+i;
  i=i+1;

 }
  printf("\n Sum of the number: %d",sum);

 getch();
 }