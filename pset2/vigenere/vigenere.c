#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int key;
string plaintext;
char cipherchar;
char charA, charK;


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!(isalpha(argv[1][i])))
        {
            printf("The key must be entirely of alphabetical characters!\n");
            return 1;
        }
    }

    printf("plaintext: ");
    plaintext = get_string();

    printf("ciphertext: ");

// find the length of plaintext and key
    int lenText = strlen(plaintext);
    int lenKey = strlen(argv[1]);

    for (int i = 0, j = 0;  i < lenText; i++)
    {
        charK = argv[1][(j) % lenKey];
        if (isupper(charK))
        {
            charK -= 65;
        }
        else if (islower(charK))
        {
            charK -= 97;
        }

        //encipher the plaintext

        if (isupper(plaintext[i]))
        {
            charA = (((plaintext[i] - 65) + charK) % 26) + 65;
            printf("%c", charA);
            j++;
        }
        else if (islower(plaintext[i]))
        {
            charA = (((plaintext[i] - 97) + charK) % 26) + 97;
            printf("%c", charA);
            j++;
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");


    return 0;
}
