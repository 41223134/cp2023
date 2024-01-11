#include <stdio.h>

int main() {
   int radius;      /* Variable to store the radius of the circle */
   float area, perimeter;    /* Variables to store the area and perimeter of the circle */
   radius = 3;      /* Assigning a value to the radius */

   /* Calculating the perimeter of the circle */
   perimeter = 2 * 3.14 * radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);

   /* Calculating the area of the circle */
   area = 3.14 * radius * radius;
   printf("Area of the Circle = %f square inches\n", area);

   return(0);
}