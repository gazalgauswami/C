// Write c programe to merge string

#include <stdio.h>
//#include<conio.h>
#include <string.h>

void main()
{
    int i, k = 0;
    char s1[3][5], s2[3][5], s3[3][5];
    // clrscr();

    printf("\n Enter a string s1 and s2: \n") ;
    for (i = 0; i < 3; i++)
    {
        gets(s1[i]);
        gets(s2[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (i < 3)
            strcpy(s3[i], s1[i]);
        else
        {
            strcpy(s3[i], s2[k]);
            k++;
        }
    }
    for (i = 0; i < 6; i++)
        printf("%s \n", s3[i]);
    // getch();
}
