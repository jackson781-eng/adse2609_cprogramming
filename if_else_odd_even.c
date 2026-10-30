/*This program demonstrates the 'if.....else' selection construct. It accepts a whole number and determines whether its odd or even.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable to be used in the program
    int num;

    //Prompt and read a whole number from the user
    printf("please enter a number and I'll tell you whether it odd or even:\n");
    scanf("%d",&num);

    //Use the 'if....else' constructs to determine whether the number is odd or even
    if(num%2 == 1)
        printf("\n%d is an odd number", num);
    else
        printf("\n%d is an even number", num);
    return 0;
}
