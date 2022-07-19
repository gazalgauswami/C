// argument with return
#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,c ;
  int sum(int,int,int);
  clrscr();
   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

  printf("%d", sum(a,b,c));
  getch();
}
int sum(int a,int b,int c)
{

   c=a+b;

   printf("\n Sum of a and b is : \n");
   return(c);

 }