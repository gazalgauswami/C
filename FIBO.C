// write a c programme to print fibbonacci series

#include<stdio.h>
#include<conio.h>

void main()
{
   void fibo(int);
   int n;
   printf("\n Enter a number: ");
   scanf("%d",&n);
   clrscr();
   fibo (n);
   getch();
}

void fibo(int n)
{
  int a=0,b=1,c=0,i;

  printf("%d %d ",a,b);

  for(i=1;i<=n-2;i++)
  {
     c=a+b;
     printf("%d ",c);
     a=b;
     b=c;
   }

}