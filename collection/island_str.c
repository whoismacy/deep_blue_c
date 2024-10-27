#include <stdio.h>

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
        printf("Name : %s opens from : %s - %s\n", i->name, i->opens, i->closes);
    }
}

int main()
{
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nubar = {"Isla Nubar", "09:00", "17:00", NULL};
    island skull = {"Skull", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nubar;
    isla_nubar.next = &skull;
    skull.next = &shutter;

    display(&amity);

    return 0;
}


