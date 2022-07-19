#include<stdio.h>
#include<conio.h>

#define max 300

void main()
{
clrscr();
#if(max==100)
	printf("\n max is %d",max);
#elif  (max==200)
	printf("\n max is %d",max);
#else
	printf("\n max is not define so it define now" );
#endif
getch();
}
