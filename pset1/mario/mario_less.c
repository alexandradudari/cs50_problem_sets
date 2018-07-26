#include <stdio.h>
#include <cs50.h>

int height;

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
        int w = height - 1 - i;
        for (int j = 0; j < height + 1 ; j++)
        {
            if (j < w)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
