// write  c programme to copying dimentional characher array
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   int i,k=0;
   char s1[3][7],s2[3][7],s3[6][7];
   clrscr();

   printf("\n Enter a string s1 and s2: \n");
   for(i=0;i<3;i++)
   {
     gets(s1[i]);
     gets(s2[i]);
   }

   for(i=0;i<6;i++)
   {
    if(i<3)
    strcpy(s3[i],s1[i]);
    else
     {
      strcpy(s3[i],s1[k]);
      k++;
     }
    }
   printf("\n show string s3\n");
   for(i=0;i<6;i++)
   puts(s3[i] );

   getch();
   }