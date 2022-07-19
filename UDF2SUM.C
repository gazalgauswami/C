// argument but no return
#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b,c;
  void sum(int,int,int);
  clrscr();
   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

  sum(a,b,c);
  getch();
}
void sum(int a,int b,int c)
{

   c=a+b;

   printf("\n Sum of a and b is : \n");
   printf("%d",c);

  }