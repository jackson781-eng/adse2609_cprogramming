/*This program displays the various comparison and logical operators in C,to compare three integers and display the largest and smallest numbers

    NB : the ternary operator (?:) will display true or false*/

//Pre-processor directive

#include <stdio.h>

int main()
{
    //Declare the variables to store three numbers, the largest and the smallest
   int a, b, c, largest, smallest;

   //Ask the user to enter three numbers
   printf("Enter the three numbers:");

   //Read the three numbers entered by the user
   scanf("%d%d%d",&a,&b,&c);

   //Display the values of the entered numbers
   printf("\nValues of 'a', 'b', and 'c' %d, %d and %d respectively.", a, b, c);

   //Find the largest number
   largest = (a >= b && a >= c) ? a :
              (b >= a && b >= c) ? b : c;

   //Find the smallest number
   smallest = (a <= b && a <= c) ? a :
              (b <= a && b <= c) ? b : c;

    //Demonstrate the comparison and logical operator
    printf("\n\nLARGEST AND SMALLEST NUMBERS");
    printf("\n==============================");

    //Display the largest number
    printf("\nlargest number = %d",largest);

    //Display the smallest number
    printf("\nsmallest number = %d",smallest);

    printf("\n==============================");

    //Demonstrate the ternary operator
    printf("\nTERNARY OPERATOR");
    printf("\n==============================");

    //Check whether a is the largest number
    printf("\nis a largest? %d", (a >= b && a >= c) ? 1 : 0);

    //Check whether a is the smallest number
    printf("\nis a smallest? %d", (a <= b && a <= c) ? 1 : 0);
    printf("\n==============================");

    return 0;
}
