// Rollno:220	Name:Gazal Gauswami:fybca/2

// write a c programme to displat squres of first N number.

#include <stdio.h>

main()
{
    int n, i;

    // Take Input From The User
    printf("\n Enter the first N number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("The squres of first natural number (%d) is : %d\n", i, i * i);
    }
}