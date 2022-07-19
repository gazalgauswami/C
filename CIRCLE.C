/* area of circle*/

#include<stdio.h>
#include<conio.h>

#define PI 3.14

void main()
{
  int r,area;
  clrscr();

  printf("\n Enter a redias of circle: ");
  scanf("%d",&r);

  area=PI *  r * r;

  printf("\n Area of circle is: %d",area);
  getch();

  }