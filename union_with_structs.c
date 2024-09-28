#include <stdio.h>

typedef union
{
    short count;
    float weight;
    float volume;
}quantity;

typedef struct
{
    const char *name;
    const char *country;
    quantity amount;
}fruit_order;


int main()
{
    fruit_order oranges = {"Oranges", "France", .amount.weight=4.5};

    printf("This order contains %2.2f lsbs of %s\n", oranges.amount.weight, oranges.name);

    return 0;
}
