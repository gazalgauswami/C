// write a program to print matrix multiplication

#include<stdio.h>
//#include <conio.h>
void main()
{
    int i, j, k, c[3][3], a[3][3], b[3][3];
    //clrscr();
    for (i=0;i<3;i++)
    {
        for (j=0;j<3; j++)
        {
            printf("\n enter a[% d][%d] =", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<3; i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\n enter b[%d][%d] =",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n matrix is:");
    printf("\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" % d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf(" % d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n M ultiplic ation is:");
    printf("\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j] = 0;
            for (k=0;k<3;k++)
            {
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    //getch();
}