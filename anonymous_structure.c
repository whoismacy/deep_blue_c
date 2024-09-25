#include <stdio.h>
#include <stdlib.h>

struct
{
    int age;
    char *name;
}*p;

int main()
{
    p = malloc(sizeof(*p));

    p->age = 78;
    p->name = "Bruce Lee";

    printf("Their name is %s and are of age %i", (*p).name, (*p).age);

    free(p);

    return 0;

}
