//no  argument but no return
#include<stdio.h>
#include<conio.h>

void main()
{

  void sum();
  clrscr();
  sum();
  getch();
}
void sum()
{
    int a,b,c;
    clrscr;

   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

   c=a+b;

   printf("\n Sum of a and b is : \n");
   printf("%d",c);

   getch();

   }