#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int double_digit_value(int num)
{
    int sum;

    int double_number = num * 2;

    if(double_number >= 10)
    {
        sum = 1 + (double_number % 10);
    }
    else
    {
        sum = double_number;
    }

    return sum;
}


int main()
{
    int checksum = 0;
    char character;
    int position = 0;

    int oddlengthchecksum = 0;
    int evenlengthchecksum - 0;

    printf("Input a value with an even number of digits.\n");

    while((character = getchar()) != '\n')
    {
        if(position % 2 == 0)
        {
            oddlengthchecksum += double_digit_value(digit - '0');
            evenlengthchecksum += digit - '0';
        }
        else
        {
            oddlengthchecksum += digit - '0';
            evenlengthchecksum += double_digit_value(digit - '0';
        }

        position++;
    }

    printf("The value of the checksum is %i\n", checksum);
 
    if(checksum % 10 == 0)
    {
        printf("The number is divisible by 10.\n");
    }
    else
    {
        printf("The number is indivisible by 10.\n");
    }


    return 0;
}

