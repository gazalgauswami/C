// write  c programme to serch dimentional characher array
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   int i,p=0;
   char s[3],s1[3][6];
   clrscr();

   printf("\n Enter a string s1 : \n");
   for(i=0;i<3;i++)
   {
     gets(s1[i]);

   }

   printf("\n Enter serch string: \n");
   gets(s);

   for(i=0;i<3;i++)
   {
    if(strcmp(s1[i],s)==0)
    p=1;

  }
  if(p=1)
  printf("\n Found string in araay\n");
  else
  printf("\n Not found string in araay\n");


   getch();
   }