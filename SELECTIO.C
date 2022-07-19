//selection shorting

#include<stdio.h>
#include<conio.h>

void main()
{
 int n,a[10],pos,i,j,t;
 clrscr();

 printf("\n Enter a number of array: ");
 scanf("%d",&n);

 for(i=0;i<=n-1;i++)
 {
  printf("\n Enter a alement of array a[%d]: ",i);
  scanf("%d",&a[i]);
 }


 for(i=0;i<=n-1;i++)
 {
  pos=i;
   for(j=i+1;j<=n-1;j++)
   {
    if(a[pos]>a[j])
    pos=j;
   }


  if(pos!=i)
  {
   t=a[i];
  a[i]=a[pos];
   a[pos]=t;
  }
  }
 for(i=0;i<=n-1;i++)
  {

   printf("\n After Sorting is a[%d] : %d ",i,a[i]);
  }

  getch();
  }