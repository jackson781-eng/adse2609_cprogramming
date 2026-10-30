/*This program demonstrates the 'if.....else' selection construct. It accepts a whole number and determines whether its odd or even.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable to be used in the program
    int score;

    //Prompt and read a whole number from the user
    printf("please enter a number and I'll tell you whether you have passed or failed:\n");
    scanf("%d",&score);

    //Use the 'if....else' constructs to determine whether you have passed or failed

    if(score < 0 || score > 100)
        printf("\n%d Invalid score. Enter a score between 0 and 100");

    else if(score >= 55)
        printf("\n%d congratulation you have passed", score);
    else
        printf("\n%d sorry you have failed", score);


    return 0;
}
