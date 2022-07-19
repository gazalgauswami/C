// write a c programe to display array  structure
#include<stdio.h>
#include<conio.h>

void main()
{
  struct {

    int age;
    char name[10];
  }s[5];
  int i;
  clrscr();

  printf("\n Enter name and age of students: \n");
  for(i=0;i<3;i++)
  scanf("%s %d",&s[i].name,&s[i].age);

  printf("\n Show name and age of students: \n");
  for(i=0;i<3;i++)
  printf("%s %d\n",s[i].name,s[i].age);

  getch();
  }