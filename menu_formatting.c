/*This program demonstrates the switch...case construct to display a restaurant menu.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variables to be used in the program
   int chips_quantity = 2;
   int burger_quantity = 1;
   int juice_quantity = 3;

   float chips_price = 150.00;
   float burger_price = 350.00;
   float juice_price = 100.00;

   float chips_total, burger_total, juice_total, grand_total;

   //Calculate the total price of each item
   chips_total = chips_quantity * chips_price;
   burger_total = burger_quantity * burger_price;
   juice_total = juice_quantity * juice_price;

   //Calculate the grand total
   grand_total = chips_total + burger_total + juice_total;

   //Display the bill
   printf("\n================ RESTAURANT BILL ================\n");

   printf("%-20s %8s %14s %14s\n", "Item", "Quantity", "Unit Price", "Total Price");

   printf("=======================================\n");

   printf("%-20s %8d %14.2f %14.2f\n", "chips", chips_quantity, chips_price, chips_total);

   printf("%-20s %8d %14.2f %14.2f\n", "burger", burger_quantity, burger_price, burger_total);

   printf("%-20s %8d %14.2f %14.2f\n", "juice", juice_quantity, juice_price, juice_total);

   printf("%-20s %14.2f\n", "GRAND TOTAL:", grand_total);

   printf("=============================================\n");

    return 0;
}
