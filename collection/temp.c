#include <stdio.h>

int main()
{
    char digit;
    printf("Enter a number\n");

    while(3)
    {
        scanf("%c", &digit);
        
        int digits = (int)digit;
        printf("The value of the digit is %i.\n\t", digits);
    }

    return 0;

    
}
