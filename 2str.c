//Read and  print 2 dimension characterarray and length of each string

#include<stdio.h>
//#include<conio.h>
#include<string.h>

void main()
{
 char name[3][5];
 int i;
 //clrsc r();
 for(i=0;i<3;i++)
 scanf("%s",name[i]);
 for(i=0;i<3;i++)
 printf("%s %d \n",name[i],strlen(name[i]));
 //getch();
}
