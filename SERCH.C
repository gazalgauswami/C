//serching element
#include<stdio.h>
#include<conio.h>

void main()
{
 int n,a[10],i,s;
 clrscr();

 printf("\n Enter number of element ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
 {
   printf("\n Enter a element of array a[%d] : ",i+1);
   scanf("%d",&a[i]);
 }
 printf("\n Enter a serch element: ");
 scanf("%d",&s);

 for(i=0;i<n;i++)
 {
    if

    (a[i]==s)
       {
	 printf("\n %d is present at posion %d ",s,i+1);
	 break;
       }
 }
 if(i==n)
 printf("\n %d is not present here",s);

 getch();
 }
