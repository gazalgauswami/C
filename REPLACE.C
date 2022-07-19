

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int i,c=0;
 char s[5],r;
 clrscr();
 printf("\n Enter a string: ");
 gets(s);

 printf("\n Enter a character to replase: :");
 scanf("%c",&r);
 for(i=0;i<strlen(s);i++)
 {
  if(s[i]==r)
  c++;
  else
  printf("%c",s[i]);
  }
  printf("\n %c apear %d time",r,c);
  getch();
  }
