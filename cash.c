#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>



int main(void)
{
    // prompts the user for a non-negative number
    float cents;
    do
    {
        cents = get_float("Change owned: ");
    }
    while (cents < 0);

    // rounds the float to the nearest penny and converts float to int
    int dollars = round(cents * 100);

    int coins = 0;

    // each while loop executes until it results false
    while (dollars >= 25)
    {
        coins++;
        dollars = dollars - 25; // Each time that body of the loop executes, 25 is subtracted to the variable dollars.
    } // the while loop executes until the condition is false after each update of the variable. Then it moves to the next loop.


    while (dollars >= 10)
    {
        coins++;
        dollars = dollars - 10 ;
    }

    while (dollars >= 5)
    {
        coins++;
        dollars = dollars - 5;
    }

    while (dollars >= 1)
    {
        coins++;
        dollars = dollars - 1;
    }

    printf("%i\n", coins); // prints number of minimum coins required for the change owned.
}
