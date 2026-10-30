/*Program that stores and displays student's details.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Derclaring and assigning values to variables
    int age = 38;
    float Averagemarks = 67.67;
    char grade = 'B';

    //Display the students detail'students
    printf("STUDENTS DETAILS");
    printf("\n================");
    printf("\nAge: %d", age);
    printf("\nAveragemarks: %.2f", Averagemarks);
    printf("\nGrade: %c", grade);
    printf("\n=================");
    return 0;
}
