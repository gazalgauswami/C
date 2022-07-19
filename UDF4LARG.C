// argument with return
#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b;
  int large(int,int);
  clrscr();
   printf("\n Enter a value of a & b: \n");
   scanf("%d %d",&a,&b);

  printf("%d",large(a,b));
  getch();
}
int large(a,b)
{
   if(a>b)
   return(a);

   else
   return(b);


   }