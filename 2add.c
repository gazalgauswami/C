// write a program to print addition of 2-dim arrray

#include <stdio.h>
//#include < c o nio.h>
void main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
    //clrscr();
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("a[%d][%d]", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("b[%d][%d]", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("matrix a =>\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("matrix b =>\n");
    for (i=0;i<3;i++)
    {
        for ( j=0;j<3;j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    printf("matrixc=>\n");
 for(i=0;i<3;i++)
 {
for(j=0;j<3;j++)
{
 printf("%d",c[i][j]);
}
printf("\n");
 }
 //getch();
}
