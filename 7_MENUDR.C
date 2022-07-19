/* find area of rectangle,squre,circle,tringle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
  int choise;
  clrscr();

  printf("\n 1 for rectangle\n 2 for squre\n 3 for circle\n 4 for tringle");
  printf("\n Enter a choise: ");
  scanf("%d",&choise);

  switch(choise)
  {
    case 1:
    {
      int lenth,width,area;
      printf("\nEnter a lenth and width: ");
      scanf("%d,%d",&lenth,&width);
      area= lenth*width;
      printf("\n area of Rectangle: %d",area);
     break; }
    case 2:
    {
      int lenth,area;
      printf("\n Enter a lenth of squre  : ");
      scanf("%d",&lenth );
      area=lenth*lenth;
      printf("\n area of squre : %d",area);
    break; }
    case 3:
    {
      int radius,area;
      printf("\n Enter a radius of circle: ");
      scanf("%d",&radius);
      area=3.1416*radius*radius;
      printf("\n area of circle: %d",area); break;
    }
    case 4:
    {
      int height   ,base,area;
      printf("\n Enter height and base of tringle: ");
      scanf("%d,%d",&height,&base);
      area=(height*base)/2;
      printf("\n area of tringle: %d",area);
      break;
    }
  }
    getch();

  }