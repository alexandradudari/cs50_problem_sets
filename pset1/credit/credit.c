#include <cs50.h>
#include <stdio.h>

//declare a variable for credit number and a variable for the  first two digits of credit card
long cc_number;
long first_digits;
int digit;

//declare a variable for multiply and sum every other digit
int xadd = 0;
//declare a variable for sum of the remaining digits
int add = 0;
int check_sum = 0;


int main(void)
{
    //prompt the user for a credit number
    do
    {
        printf("Number: ");
        cc_number = get_long_long();
    }
    while (cc_number < 0);

    //find first two digits of credit number
    first_digits = cc_number;
    while (first_digits > 100)
    {
        first_digits /= 10;
    }
    //get cc_number length
    long cc_copy = cc_number;
    int counter = 0;
    while (cc_copy > 0)
    {
        cc_copy /= 10;
        counter++;
    }

    //calculate the check_sum from digits
    for (int i = 0; i < counter; i++)
    {
        digit = cc_number % 10;
        cc_number /= 10;
        if (i % 2 != 0)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
                xadd += digit;
            }
            else
            {
                xadd += digit;
            }
        }
        else
        {
            add += digit;
        }

    }

    //calculate the check_sum
    check_sum = add + xadd;

    //verify if the card is valid and what type is it
    if (check_sum % 10 == 0 && counter >= 13 && counter <= 16)
    {
        if (first_digits == 34 || first_digits == 37)
        {
            printf("AMEX\n");
        }
        else if (first_digits > 50 && first_digits < 56)
        {
            printf("MASTERCARD\n");
        }
        else if (first_digits >= 40 && first_digits < 50)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
