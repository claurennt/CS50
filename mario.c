#include <stdio.h>
#include <cs50.h>

// print a pyramid for mario
int main(void)
{

    int n;
    do // promt the user to give a height value between 1 and 8
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int r = 0; r < n; r++) // aligns the pyramid right-left
    {
        for (int d = 0; d < n - r - 1; d++)
        {
            printf(" ");
        }
        for (int c = 0 ; c < r + 1; c++)
        {
            printf("#");

        }
        printf("\n");


    }
}
