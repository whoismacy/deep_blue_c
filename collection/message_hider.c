#include <stdio.h>
#include "encrypt.h"

int main()
{
    char message[80];

    while(fgets(message, 80, stdin))
    {
        encrypt(message);
        printf("%s", message);
    }

    return 0;

}
