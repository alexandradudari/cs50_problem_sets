#include <stdio.h>
#include <cs50.h>

float dollars;
float cents;
int coin_used;

int main(void)
{

    do
    {
        printf("Change owed: ");
        dollars = get_float();
    }
    while (dollars < 0);

    cents = round(dollars * 100);

    while (cents >= 25)
    {
        coin_used += 1;
        cents = cents - 25;
    }

    while (cents >= 10)
    {
        coin_used += 1;
        cents = cents - 10;
    }

    while (cents >= 5)
    {
        coin_used += 1;
        cents = cents - 5;
    }

    while (cents >= 1)
    {
        coin_used += 1;
        cents = cents - 1;
    }
    printf("%i\n", coin_used);
}
