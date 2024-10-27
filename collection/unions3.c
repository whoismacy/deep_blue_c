#include <stdio.h>

typedef union
{
    float weight;
    int count;
}cupcake;

int main()
{
    cupcake order = {.count=2};
    printf("Cupcakes quantity: %i\n", order.count);

    return 0;
}
