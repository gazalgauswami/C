//dispaly fibbonaci

#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,n1=0,n2=1,n3;
clrscr();

for(i=2;i<11;i++)
{
 n3=n1+n2 ;
 printf("\n febonacci series is : %d ",n3);
 n1=n2;
 n2=n3;

}

printf("\n Febonacci series is : %d ",n3);
getch();
}