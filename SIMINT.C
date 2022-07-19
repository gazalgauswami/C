//write a programme calculate simple interst
#include<stdio.h>
#include<conio.h>

void main()
{
int p,r,n;
clrscr();

printf("\n Enter Price: ");
scanf("\n %d",&p);

printf("\n Enter rate : ");
scanf("%d",&r);

printf("\n Enter number of year: ");
scanf("%d",&n);
float i;
i=(p*r*n)/100;
printf("\n Interst is: %f",i);

getch();
}