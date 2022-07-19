// s e a rc h st rin g
#include<stdio.h>
//# i n clu d e < c o nio.h >
#include<string.h>
void main()
{
 char s[3][5],temp[5],i,c = 0;
 //clrsc r();
 for(i = 0;i < 3;i++ )
 scanf("%s",s[i]);
 printf("\n enter string to search");
 scanf("%s",temp);
 for(i = 0;i < 3;i++ )
 {
 if(strcmp(temp,s[i])==0)
 c = 1;
 }
 if(c==1)
 printf("\n enter string found");
 else
 printf("\n enter not found");
 //g e t c h();
}
