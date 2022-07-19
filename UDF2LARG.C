//argument but  no return
#include<stdio.h>
#include<conio.h>

void main()
{
  int a,b;
  void large(int,int);
  clrscr();
    printf("\n Enter a value of a & b: \n");
    scanf("%d %d",&a,&b);
  large(a,b);
  getch();
}
void large(int a,int b)
{

   if(a>b)
   printf("A");

   else
   printf("B");

   }