// Rollno:220	Name:Gazal Gauswami:fybca/2

//dispaly marksheet 

#include<stdio.h>

main()
{
//declaration of variable
int rollno,M1,M2,M3,M4,M5,total,per;
char name[20];

//Enter Value Of Students Result
printf("/n Enter Rollno.,Name,Marks1,Marks2,Marks3,Marks4,Marks");
scanf("%d\t,%s\t,%d\t,%d\t,%d\t,%d\t,%d\t",&rollno,&name,&M1,&M2,&M3,&M4,&M5);

total=M1+M2+M3+M4+M5;
per=total/5;

//show students detail values
printf("\nName is: %s ",name);
printf("\n Roll number is: %d",rollno);
printf("\nMarks 1 is: %d ",M1);
printf("\nMarks 2 is: %d ",M2);
printf("\nMarks 3 is: %d ",M3);
printf("\nMarks 4 is: %d ",M4);
printf("\nMarks 4 is: %d ",M5);
printf("\n Total Marks is: %d ",total);
printf("\n Persantage is : %d ",&per);

//if condition
if(per>70)
    printf("\n Distinction");
else if(per>60)
    printf("\n First Class"); 
else if(per>50)
    printf("\n Second Class");
else if(per>40)
    printf("\n Third Class");   
else
    printf("\n Fail");    
    
}