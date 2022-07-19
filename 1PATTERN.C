// no argument no return in loop pattern
#include<stdio.h>
//#include<conio.h>

void main()
{
  void pattern();
  //clrscr();
  pattern();
  //getch();
}
void pattern()
{
  int n,i,j;

  printf("\n Enter a value of n: \n");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     {
       printf("%d",j);
      }
     printf("\n");
   }
}