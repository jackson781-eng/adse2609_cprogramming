/*This program displays the multiplication table from 1 - 12*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable to be used in the program
    int number,counter, result;

    //Prompt the user to enter a positive integer
    printf("please enter a positive integer");
    scanf("%d",&number);

    //Use the 'if....else' constructs to determine whether the number is positive
    if(number <= 0)
        printf("Error: Please enter a positive integer.\n");
    else
    //Display the multiplication table heading
        printf("\nMultiplication table for %d\n", number);
        printf("------------------------------\n");

        //Use a for loop to display the table
        for (counter = 1; counter <= 12; counter++)
        {
            //Calculate the result
            result = number * counter;

            //Display each multiplication
            printf("%d × %-2d = %d\n", number, counter, result);
        }

    return 0;
}
