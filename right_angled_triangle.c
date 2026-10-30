/*This program accept the area of a right angled triangle from the user, calculates and displays its area, and perimeter using in-build functions.*/

//Pre-processor directive
#include <stdio.h>
#define MYPI 3.141593 //define pi as a constant
#include <math.h>

//main function provides the entry point to the program
int main()
{
    //Variables to be used in the program
    float base, height, area, perimeter;

    //Prompt the user for the triangles base
    printf("Please enter the dimension of the triangle's in cm.\n");
    scanf("%f",&base);

    //Prompt the user for the triangles height
    printf("Please enter the triangle's height in cm.\n");
    scanf("%f",&height);

    //Declare and calculate the triangle's hypotenuse
    float hypotenuse = sqrt( (pow(height,2) + pow(base,2)) );

    //Calculate the area and perimeter of the right-angled triangle
    area = .5 *base * height;
    perimeter = base + height + hypotenuse;

    //Display the circle's dimensions
    printf("\nTriangles dimensions");
    printf("\n---------------------------");
    printf("\n%-13s:%6.2f cm.","Base",base);
    printf("\n%-13s:%6.2f cm?.","Height",height);
    printf("\n%-13s:%6.2f cm.","Hypotenuse",hypotenuse);
    printf("\n%-13s:%6.2f cm.","Area",area);
    printf("\n%-13s:%6.2f cm.","Perimeter",perimeter);

    printf("\n---------------------------");

    return 0;
}
