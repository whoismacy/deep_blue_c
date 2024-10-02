#include <stdio.h>
#include <string.h>

char tracks[][80] = {"I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
    "Cinnamon Girl",
    "Truth Hurts",
};

void find_string(char search_for[])
{
    int i;

    for(i = 0; i < 7; i++)
    {
        if(strstr(tracks[i], search_for))
        {
            printf("Track %i : '%s\n'", i + 1, tracks[i]);
        }
    }
}

int main()
{
    char search_for[80];

    printf("Enter the name of the track you would like to search for.\n");
    fgets(search_for, 80, stdin);

    search_for[strcspn(search_for, "\n")] = '\0';

    find_string(search_for);
    return 0;
}
