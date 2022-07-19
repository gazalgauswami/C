//argument with return
//find squre of given value using udf
#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  int squre(int);
  clrscr();

  printf("\n Enter a number: ");
  scanf("%d",&a);
  b=squre(a);
  printf("\n Squre of %d is %d",a,b);
  getch();
}
int squre(int x)
{
   int p;
   p=x*x;
   return(p);
}