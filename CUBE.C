//write a programe volume of cube

#include<stdio.h>
#include<conio.h>

void main()
{
int l,b,h,v;
clrscr();

printf("\n Enter Lenth of cube: ");
scanf("%d",&l);
printf("\n Enter Breath of cube: ");
scanf("%d",&b);
printf("\n Enter Height of cube: ");
scanf("%d",&h);

v=l*b*h;
printf("\n Volume of cube is : %d",v);

getch();

}