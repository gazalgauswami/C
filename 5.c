// Rollno:220	Name:Gazal Gauswami:fybca/2

 /*write a C programe to Display the given character in following pattern.
 ^
 ^^
 ^^^*/

#include<stdio.h>

main()
{
//declaration of variable
int n,i,c;

//Take input from the user
printf("\n Enter the Number : ");
scanf("%d",&n);

//looping structer
for(i=1;i<=n;i++)
{
    for(c=1;c<=i;c++)
    {
        printf("^ ");
    }
   printf("\n");
}

}