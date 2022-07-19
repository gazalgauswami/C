// write a c programme to palindrom number

#include<stdio.h>
#include<conio.h>

void main()
{
   int n;
   void pali(int );
   printf("\n Entera n: ");
   scanf("%d",&n);
   clrscr();
   pali(n);
   getch();
}
void pali(int n)
{
  int  rem,reverse=0,n1;

  n1=n;
   while(n>0)
   {
     rem=n%10;
     reverse=reverse*10+rem;
     n=n/10;
   }
   if(n1==reverse)
   printf("\n Palindrom number: %d",n);
   else
   printf("\n Not palindrom number : %d",n);


}
