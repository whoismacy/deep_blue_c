#include <stdio.h>

//This is my attempt to create a Fraction Simplifier using Euclid's algorithm
//Okay let'ss gooo.

void fraction_simplifier(int *nums, int *denoms)
{
    int num = *nums;
    int den = *denoms;

    while(den > 0)
    {
        if ( num > den)
        {
            int temp = num;
            num = den;
            den = temp;
        }
        den = den - num;
    }

    int fin_num = *nums / num;
    int fin_den = *denoms / num;

    printf("The Value of the simplified fraction is %i / %i", fin_num, fin_den);
}

int main() 
{
    int numerator = 900;
    int denominator = 1800;

    fraction_simplifier(&numerator, &denominator);

    return 0;
}

