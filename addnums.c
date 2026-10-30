// C program to display "Hello World" on the console
//Pre-processor directive

// C program that accepts two numbers, sums them and displays their sum
#include <stdio.h>

int main()
{
    // C program that accepts two numbers, sums them and displays their sum

    // variable to used in the program//C program that accepts two numbers, sums them and displays their sum
    //variable to be used in the program
    int num1, num2, sum;

    //prompt the user for the variable to be added
    printf("Please enter the value of the first number to be added:\n");
    //Read in the value of the first number
    scanf("%d",&num1);

      printf("Please enter the value of the second number to be added:\n");
    //Read in the value of the first number
    scanf("%d",&num2);

    //Add the two numbers and assign the result to sum
    sum = num1 + num2;

    printf("\n%d + %d = %d\n",num1,num2,sum);

    return 0 ;
}
