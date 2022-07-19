//no argument but return
#include<stdio.h>
#include<conio.h>

int main()
{
  int large();
  clrscr();
  printf("%d",large());
  getch();
}
int large()
{
   int a,b;

   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

   if(a>b)
   return(a);

   else
   return(b);

   }