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

