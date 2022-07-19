// Write a c programme to print marksheet of student

#include<stdio.h>
#include<conio.h>

void main()
{
   struct std{
   int rno,m1,m2;
   char name[10];
   }s[3];
   int t,i,rno;
   clrscr();

   printf("\n Enter a rno,name,m1,m2  : ");
   for(i=0;i<3;i++)
   scanf("%d %s %d %d",&s[i].rno,&s[i].name,&s[i].m1,&s[i].m2);

   printf("\n Enter a rollno for serch: ");
   scanf("%d",&rno);

   for(i=0;i<3;i++)
   {
      if(s[i].rno==rno)
      {
	t=0;
	t=s[i].m1+s[i].m2;
	printf("\n Show result: ");
	printf("%d %s %d %d %d %d",s[i].rno,s[i].name,s[i].m1,s[i].m2,t,t/2);
     }
   }
   getch();

   }