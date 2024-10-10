#include "encrypt.h"
#include "checksum.h"


void encrypt(char *message)
{
    while(*message)
    {
        *message = *message ^ 21;
        message++;
    }

}

int checksum(char *message)
{
    int c = 0;

    while (*message)
    {
        c += c ^ (int)(*message);
        message++;
    }

    return c;

}

