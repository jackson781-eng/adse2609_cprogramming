//*This program asks/prompts the user to their name, reads the input from the console , and displays a greeting

//Pre-processor directive

#include <stdio.h>

int main()
{
    //Character array to hold the user's name
    char name[80];

    //Prompt the user for their name
    printf("Please enter you name:\n");

    //Read the user's name
    gets(name);//Why did we not use scanf() to read in the name

    //Greet the user
    printf("\nHello \%s\" from C programming!",name);

    return 0;
}
