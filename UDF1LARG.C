//no argument no return
#include<stdio.h>
#include<conio.h>

void main()
{
  void large();
  clrscr();
  large();
  getch();
}
void large()
{
   int a,b;
   clrscr;

   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

   if(a>b)
   printf("A");

   else
   printf("B");



   getch();

   }