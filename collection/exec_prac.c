#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char *w = getenv("EXTRA");
    
    if(!w)
        w = getenv("FOOD");

    if(!w)
        w = argv[argc - 1];

    if(!c)
        c = argv[argc - 1];

    printf("%s with %s\n", c, w);
    return 0;
}
