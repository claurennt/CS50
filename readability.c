#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main(int argc, string argv[])
{
    // checks if user has typed more or less than 2 arguments in the command-line
    if (argc != 2)
    {
        printf("Usage: ./caesar key.\n");
        return 1;
    }
    else  //if users types nr 2 arguments, the code checks if the second argument is made up of just numeric digits
    {

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isalpha(argv[1][i]) || isdigit(argv[1][i]) < 1)
            {
                printf("Usage: ./caesar key.\n");
                return 1;
            }
        }
    }
    int key = atoi(argv[1]);  //converts the second argument into an int, in order to be used later as key
    string pltext = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(pltext); i++)
    {

        //checks if character is an aphabetic, preserving the case; then rotates it and prints it
        if (isalpha(pltext[i]))
        {
            //wraps the character back to the beginning of the alphabet if character + key is 'Z' or 'z' or "more" using modulo operator
            if (isupper(pltext[i]))
            {
                printf("%c", (((pltext[i] - 65) + key) % 26) + 65);
            }
            else
            {
                printf("%c", (((pltext[i] - 97) + key) % 26) + 97);
            }

        }

        //preserves punctuation, numbers and spaces and prints them as they are
        else if (isdigit(pltext[i]) || isblank(pltext[i]) || ispunct(pltext[i]))
        {
            printf("%c", pltext[i]);
        }
    }

    printf("\n");
    return 0;
}
