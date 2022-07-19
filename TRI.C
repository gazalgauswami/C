// write a programe to find area volume of ringle
#include<stdio.h>
#include<conio.h>

void main()
{
int h,b,v;
clrscr();

printf("\n Enter Height Of tringle : ");
scanf("%d",&h);

printf("\n Enter Base of Tringle: ");
scanf("%d",&b);

v=(h*b)/2;
printf("\n Volume of tringle is : %d",v);

getch();
}