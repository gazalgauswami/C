//write swich programe for charecter
#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();

printf("\n Enter elphabet: ",c);
scanf("\n %c",&c);

switch(c)
{
case'A':
	printf("\n alphabet is A ");
	break;
case'B':
	printf("\n alphabet is B ");
	break;
case'C':
	printf("\n alphabet is C ");
	break;
case'D':
	printf("\n alphabet is D ");
	break;

	default:
	printf("\n invaild input");
	break;
	}
getch();
}