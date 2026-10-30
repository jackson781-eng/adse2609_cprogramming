/* Program that calculates the total cost of items purchased at a shop. */

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Declare variables to be used in the program
    float totalcost, discount, finalamount;
    int quantity, price;

    //Ask the user to enter price
    printf("Please enter price");
    scanf("%d", &price);

     //Ask the user to enter quantity
    printf("Please enter quantity");
    scanf("%d", &quantity);

    //Calculate total cost
    totalcost = price * quantity;

    //Calculate a discount of 10% if the total cost is at least ksh 1000
    if(totalcost >= 1000)
        discount = totalcost * 0.10;
        printf("\ndiscount: %f", discount);

    //Calculate the final amount payable
    finalamount = totalcost - discount;

    printf("\nYour finalamount is %f", finalamount);

    return 0;
}
