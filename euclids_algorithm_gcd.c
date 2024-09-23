#include<stdio.h>
//Using Euclid's algorithm to find the gcd of a given pair of numbers.

int gcd(int a, int b)
{
    int temp;
    while(a > 0)
    {
        if(b > a)
        {
            temp = b;
            b = a;
            a = temp;
        }
        a = a % b;
    }

    return b;
}

int main()
{
    int x = 142;
    int y = 28;

    printf("The GCD of %i and %i is: %i \n",x, y, gcd(x,y));

    return 0;
}

