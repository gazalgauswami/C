//copying two dimension charecter array
#include<stdio.h >
//#include <conio.h >
#include<string.h>
void main()
{
 char name[3][5],temp[3][5]; //te m p is t e m p a r a ry a r r ay to co py st rin g
 int i;
 //clrscr();
 for(i=0;i < 3;i++ )
 scanf("%s",name[i]);
 for(i = 0;i < 3;i++ )
 strcpy(temp[i],name[i]);
 for(i = 0;i < 3;i++ )
 printf("%s \n",temp[i]);
 //g e t c h();
}
