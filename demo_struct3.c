#include <stdio.h>
typedef struct
{
    const char *description;
    float value;
} swag;

typedef struct
{
    swag *swag;
    const char *sequence;
}combination;

typedef struct
{
    combination numbers;
    const char *make;
}safe;

int main()
{
    swag gold = {"GOLD!", 1000000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};

    printf("Contents of the safe are = %s which are of value %f", s.numbers.swag->description, s.numbers.swag->value);
    return 0;
}
