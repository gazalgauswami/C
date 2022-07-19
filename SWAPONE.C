// write programme of swaping two number

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n Enter Two Number: ");
scanf("%d,%d",&a,&b);
printf("\n Before Swapping \ta=%d,\tb=%d",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("\n After Swaping   \ta=%d,\tb=%d",a,b);
getch();
}