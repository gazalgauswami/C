// write a c programe to display array  structure with if condition
#include<stdio.h>
#include<conio.h>


  struct {

    int age;
    char name[10];
 }s[5];

void main()
{
  int i;
  clrscr();

  printf("\n Enter name and age of students: \n");
  for(i=0;i<3;i++)
  scanf("%s %d",&s[i].name,&s[i].age);

  printf("\n Show name and age of students: \n");
  for(i=0;i<3;i++)
  {
     if(s[i].age<25)
     printf("%s %d\n",s[i].name,s[i].age);
   }
  getch();
  }