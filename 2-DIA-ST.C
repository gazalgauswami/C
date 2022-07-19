// display two diamentional string and its lenth

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
  int i;
  char s[3][10];
  clrscr();

  printf("\n Enter string: \n");
  for(i=0;i<3;i++)
  gets(s[i]);

  printf("\n string and its lenth is below: \n");
  for(i=0;i<3;i++)
  printf("%s %d \n",s[i],strlen(s[i]));

  getch();
  }