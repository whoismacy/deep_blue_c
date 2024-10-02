#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);

    char *t = s + len - 1;

    while(t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}


int main()
{
    char *juices[] = {
        "dragonfruit", "waterberry", "sharonfruit", "uglifruit",
        "rumberry", "kiwifruit", "mulberry", "strawberry", "blueberry",
        "blackberry", "starfruit"
    };

    puts(juices[6]);

    print_reverse(juices[7]);

    return 0;
}
