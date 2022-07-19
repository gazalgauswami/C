//write a programme to find that year is leap year or not

#include<stdio.h>
#include<conio.h>

void main()
{
int year;
clrscr();

printf("\n Enter a year: ");
scanf("\n %d",&year);

if(year%400==0)
	printf("\n This year is leap year");

else if(year%100==0)
	printf("\n This year is not leap year");
else if(year%4==0)
	printf("\n This year is leap year");

else
	printf("\n This year is leap year");

getch();

}