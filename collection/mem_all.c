#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct island;

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
}island;

void display(island *start)
{
    island *i = start;
    for(; i != NULL; i = i->next)
    {
        printf("Name : %s opens from %s - %s", i->name, i->opens, i->closes);
    }
}

island *create(char *name)
{
    island *i = (island *)malloc(sizeof(island));
    if (i == NULL)
    {
        fprintf(stderr, "Memory allocation failed.");
        exit(1);
    }
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;

    return i;
}

int main()
{
    char name[80];

    printf("Enter the name for the first island: \n");
    fgets(name, 80, stdin);
    island *p_island0 = create(name);


    printf("Enter name for the second island: \n");
    fgets(name, 80, stdin);
    island *p_island1 = create(name);

    display(p_island0);
    display(p_island1);

    free(p_island0);
    free(p_island1);
    free(name);

    return 0;
}
