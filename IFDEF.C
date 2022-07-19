#include<stdio.h>
#include<conio.h>

#define max 100
void main()
{
clrscr();

#ifdef max
	printf("\n max number is %d ",max);
#else
	printf("\n max is not define.");
#endif

getch();
}