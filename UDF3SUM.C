//no  argument but return
#include<stdio.h>
#include<conio.h>

int main()
{

  int sum();
  clrscr();
  printf("%d",sum());
  getch();
}
int sum()
{
    int a,b,c;

   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

   c=a+b;

   printf("\n Sum of a and b is : \n");
   return( c);


   }