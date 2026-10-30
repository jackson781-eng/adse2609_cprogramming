/*This program accept the radius of a circle from the user, calculates and displays its area, and circumference.*/

//Pre-processor directive
#include <stdio.h>
#define MYPI 3.141593//define pi as a constant

//main function provides the entry point to the program
int main()
{
    //Variables to be used in the program
    float radius, area, circumference;

    //Prompt the user for the circle's radius
    printf("Please enter the radius of the circle in cm.\n");
    scanf("%f,&radius");

    //Calculate the area and circumference of the circle
    area=MYPI*radius*radius;
    circumference = MYPI*(radius*2);

    //Display the circle's dimensions
    printf("\nCircles's dimensions");
    printf("\n---------------------------");
    printf("\n%-13s:%6.2f cm.","Radius",radius);
    printf("\n%-13s:%6.2f cm?.","Area",area);
    printf("\n%-13s:%6.2f cm.","Circumference",circumference);
    printf("\n---------------------------");

    return 0;
}
