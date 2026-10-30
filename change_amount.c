#include <stdio.h>

int main()
{
    // C program that that accepts an amount of money, and the price of two products

    // variable to used in the program//C program that accepts an amount of money, and the price of two products

    int amount, sugar, milk, change;

    //prompt the user for the variable to be added
    printf("Amount:kes");
    //Read in the value of the first number
    scanf("%d",&amount);

      printf("sugar:kes");
    //Read in the value of the second number
    scanf("%d",&sugar);

        printf("milk:kes");
    //Read in the value of the third number
    scanf("%d",&milk);

    //Add the three numbers and subtract them from the amount to get the change
    change = amount - (sugar + milk);

    printf("change : kes = %d\n" , change);

    return 0 ;
}
