//factorial using recursive function
#include<stdio.h>
#include<conio.h>

void main()
{
   int x=5;
   int fact(int);
   clrscr();
   printf("fact of %d is %d ",x,fact(x));
   getch();
 }
int fact(int n)
{
  if(n<=1)
     return 1;
  else
     return n*fact (n-1);

}
