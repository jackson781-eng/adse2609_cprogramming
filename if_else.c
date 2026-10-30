/*This program demonstrates the 'if' selection construct. It accepts a letter of the alphabet from the user and check is it is a vowel.*/

//Pre-processor directive
#include <stdio.h>
#include<ctype.h> //includes definition for the 'tolower()' function

int main()
{
    //Character array to hold the user's name
    char userletter;

    //Prompt the user for a letter of the alphabet
    printf("Please enter a letter of the alphabet and I'll tell you whether it's a vowel:\n");
    scanf("%c",&userletter);

    //Converts the  user's input to lowercase
    userletter = tolower(userletter);

    //Check whether the letter is a vowel
    if(userletter == 'a' || userletter == 'e' || userletter == 'i' || userletter == 'o' || userletter == 'u')
    printf("\n%c is a vowel.", userletter);

    return 0;
}
