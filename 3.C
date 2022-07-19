// Rollno:220	Name:Gazal Gauswami,Fybca/2

// write c programe to find the area of circle

#include <stdio.h>
#include <conio.h>

void main()
{
    float area, radius;
    clrscr();

    // take input from user
    printf("\n Enter radius of circle: ");
    scanf("%f", &radius);

    // formula of area of circle
    area = 3.14 * radius * radius;

    // show output
    printf("\n area of circle is: %.2f ", area);

    getch();
}