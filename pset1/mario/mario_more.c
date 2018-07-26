#include <stdio.h>
#include <cs50.h>

int height;  //declare a new variable

int main(void)
{

    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (!(height >= 0 && height < 24));

    for (int i = 0; i < height; i++)
    {
        for (int j = i; j < height - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int m = 0; m < i + 1; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
