/* smallest and largest number in areay*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[10],i,n,min,max;
 clrscr();

 printf("\n Enter a number of array: ");
 scanf("%d",&n);

 for(i=0;i<+n ;i++)
 {
   printf("\n Enter a alements of a[%d]: ",i+1);
   scanf("%d",&a[i]);
 }

//x=a[0];
//in=a[0] ;
 // assume that first element is maximum and minimun.

 for(i=1;i<=n;i++)
 { max=a[0];
   if(a[i]>max)
   {
     max=a[i];

   } min=a[0];
  if(a[i]<min)
   {
    min=a[i];
   }
 }
 printf("\n Maximum number is : %d",max);
 printf("\n Minimum number is : %d",min);

 getch();

 }