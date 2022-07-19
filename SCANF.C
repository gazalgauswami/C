#include<stdio.h>
#include<conio.h>

void main()
{
int a;
float b;
char c,d[10];

clrscr();
printf("\n Enter value for a,b,c,d:");
scanf("\n %d,%f,%c,%s",&a,&b,&c,&d);

printf("\n Value of a,b,c,d");
printf("\n %d,%f,%c,%s",&a,&b,&c,&d);

getch();
}
