// write  c programme to copying dimentional characher array
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   int i;
   char s1[3][7],s2[3][7];
   clrscr();

   printf("\n Enter a string s1 \n");
   for(i=0;i<3;i++)
   gets(s1[i]);

   for(i=0;i<3;i++)
   strcpy(s2[i],s1[i]);

   printf("\n show string s2\n");
   for(i=0;i<3;i++)
   puts(s2[i] );

   getch();
   }