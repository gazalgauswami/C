//write a program to print transpose of 2-dim arrray

#include<stdio.h >
//# include <conio.h >
void main()
{
 int i,j,a[3][3];
 //clrscr();
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("a[%d][%d]",i+1,j+1);
 scanf("%d",&a[i][j]);
}
 }
 printf("matrix a = > \n");
 for(i=0;i<3;i++)
 {
for(j=0;j<3;j++)
{
 printf("%d",a[i][j]);
}
printf("\n");
 }
 printf("transpose matrix = > \n");
 
for(i=0;i<3;i++)
 {
for(j=0;j<3;j++)
{
 printf("%d",a[j][i]);
}
printf("\n");
 }
 //g e t c h();
}

 
