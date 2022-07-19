//write a programme find area of rectangle

#include<stdio.h>
#include<conio.h>

void main()
{
int side1,side2,area;
clrscr();

printf("\n Enter Size of One Side : ");
scanf("%d",&side1);

printf("\n Enter Size of Two Side : " );
scanf("%d",&side2);

area=side1*side2;   //area of rectangle = lenth*width
printf("\n Area of Rectangle is:%d",area);

getch();
}