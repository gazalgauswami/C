// Rollno:220	Name:Gazal Gauswami:fybca/2

// write a program to get required values from user to find simple interest and compound interest and display the interest as an output

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    // si=simpale interest,p=principal,r=rate,t=time,ci=compound interest
    float si, p, r, t, ci;
    clrscr();

    printf("\nEnter value of p,r,t :"); // enter value of p,r,n
    scanf("%f,%f,%f", &p, &r, &t);

    // formula of simple interest
    si = (p * r * t) / 100;

    // formula of compound interest
    ci = p * (pow((1 + r / 100), t));

    // show output of simpale interest
    printf("\n Simpale Interest is: %.2f ", si);

    // show output of compound interest
    printf("\n Compound interest is: %.2f ", ci);

    getch();
}