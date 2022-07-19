#include<stdio.h>
#include<conio.h>

void main()
{
int n,f,l;
clrscr();

printf("\n Enter a number: ");
scanf("%d",&n);

f=n/1000;
l=n%10;

printf("\n N=%d",n);
printf("\nSum Of The First And Last Number Is : %d",f+l);

getch();
getch();

}