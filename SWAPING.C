// write a programme swaping two number by third varible

#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();
printf("\n Enter Two Integers : ");
scanf("%d,%d",&a,&b);
printf("\n Before Swaping Value\ta=%d,\tb=%d",a,b);
c=a;
a=b;
b=c;

printf("\n After Swaping value \ta=%d,\tb=%d",a,b);
getch();
}
