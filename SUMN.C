//write a programme to sum number that enter by user

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n Enter Number Of Integers That You Want To Edd: ");
scanf("%d",&n);

int c,sum=0,value;
for(c=1;c<=n;c++)
{
printf("\n Enter Integers: ");
scanf("%d",&value);
sum=sum+value;
}
printf("\n Sum Of The Enter Integers is : %d",sum);
getch();
}
