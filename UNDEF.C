#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
clrscr();
printf("\n max is %d",max);
#undef max
#define max 200

printf("\n max is %d",max);

getch();
}