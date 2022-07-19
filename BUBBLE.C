#include<stdio.h>
#include<conio.h>

void main()
{
 int n,a[10],i,j,t;
 clrscr();

 printf("\n Enter a number of array: ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  printf("\n Enter a alement of alement a[%d]: ",i);
  scanf("%d",&a[i]);
 }

 for(i=1;i<=n-1;i++)
 {
  for(j=1;j<=n-1;j++)
  {
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
  }
 for(i=1;i<=n;i++)
 {
  printf("\n sorting varible is: ");
  printf("\n a[%d]: %d ",i,a[i]);
 }
  getch();
 }