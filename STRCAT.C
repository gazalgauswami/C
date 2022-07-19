#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char a[10];
char b[10];
clrscr();

gets(a);
gets(b);
strcat(a,b);

printf("\n Canecting : %s",strcat(a,b));
getch();
}