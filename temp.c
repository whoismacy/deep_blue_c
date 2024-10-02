#include <stdio.h>

int main()
{
    int checksum = 0;
    char c;
    int i;

   
    for(i = 0; i < 6; i++)
    {
        printf("Kindly enter the %i digit:--> \n", i + 1);
        scanf("%c", &c);

        checksum += c - '0';

    }

    printf("The value of the checksum is : %i\n", checksum);

    if(checksum % 10 == 0)
    {
        printf("The Checksum is divisible by 10.\n");
    }
    else
    {
        printf("The Checksum is indivisible by 10.\n");
    }

    return 0;
}
