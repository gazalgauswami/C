//  argument no return in loop pattern
#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,n;
  void pattern(int ,int,int);
  clrscr();
  printf("\n Enter a value of n: \n");
  scanf("%d",&n);

  pattern(i,j,n);
  getch();
}
void pattern(int i,int j,int n)
{

  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     {
       printf("%d",j);
      }
     printf("\n");
   }
}