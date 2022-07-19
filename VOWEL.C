// Write a c programme to display vowel in the string and count it
#include <stdio.h>
//#include<conio.h>
#include <string.h>

int main()
{
  void vowel();
  // clrscr();
  vowel();
  // getch();
}
void vowel()
{
  int i, c = 0, j;
  char name[3][10];

  printf("\n Enter a string : ");
  for (i = 0; i < 3; i++)
    scanf("%s", name[i]);

  for (i = 0; i < 3; i++)
  {
    c = 0;
    for (j = 0; j < strlen(name[i]); j++)
    {
      if (name[i][j] == 'a' || name[i][j] == 'i' || name[i][j] == 'e' || name[i][j] == 'o' || name[i][j] == 'u')
        c++;
      printf("%c", name[i][j]);
    }
    printf(" %d \n", c);
  }

  // getch();
}
