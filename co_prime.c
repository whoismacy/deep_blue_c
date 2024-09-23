#include <stdio.h>

//This is an attempt to create a function that checks whether that two functions are Co-prime 
//Using Euclid's algorithm used somewhere RSA key generation.

void coprime(int a, int b)
{
    while(a > 0)
    {
        if (a < b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        a = a - b;
    }

    if(b == 1)
    {
        printf("The two numbers provided are Co-Prime\n");
    }
    else{

        printf("The two numbers are not Co-Prime and have a GCD of %i\n", b);
    }
}

int main()
{
    coprime(90, 13);

    return 0;
}

