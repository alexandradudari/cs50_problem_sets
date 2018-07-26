#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int key;
string plaintext;
char charA;


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    key = atoi(argv[1]);

    if (key <= 0)
    {
        printf("The key must be a non-negative integer!\n");
        return 1;
    }
    else
    {
        printf("plaintext: ");
        plaintext = get_string();
    }
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            charA = (((plaintext[i] - 65) + key) % 26) + 65;
            printf("%c", charA);
        }
        else if (islower(plaintext[i]))
        {
            charA = (((plaintext[i] - 97) + key) % 26) + 97;
            printf("%c", charA);

        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");


    return 0;
}
