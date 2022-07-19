// write a c programe to display structure
#include<stdio.h>
#include<conio.h>

void main()
{
  struct {
    int age;
    char name[10];
  }s1;
  clrscr();

  printf("\n Enter name and age of students: ");
  scanf("%s %d",&s1.name,&s1.age);

  printf("\n Show name and age of students: ");
  printf("%s %d",s1.name,s1.age);

  getch();
  }