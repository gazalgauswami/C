// write a c programme to remove character from the string
#include<stdio.h>
//#include<conio.h>
#include<string.h>

int main()
{
  int i,j;
  char r,s1[3][10];
  //clrscr();

  printf("\n Enter a strings: ");
  for(i=0;i<3;i++)
  gets(s1[i]);

  printf("\n Enter remove character: ");
  scanf("%c",&r);

  for(i=0;i<3;i++)
  {
     for(j=0;j<strlen(s1[i]);j++)
     {
	if(s1[i][j]==r)
	{}
	else
	{
	    printf("%c",s1[i][j]);
	}
     }
     printf("\n");
   }
  // getch();

}