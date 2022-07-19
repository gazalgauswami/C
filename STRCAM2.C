#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[10];
char b[10];
clrscr();

printf("\n Enter first string: ",a);
gets(a);

printf("\n Enter Second string: ",b);
gets(b);

strcmp(a,b);
printf("\n string combination is: %d",strcmp(a,b));

getch();
}