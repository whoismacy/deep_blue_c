#include <stdio.h>
#include <string.h>

//An array of Arrays

char tracks[][80] = {"I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima"
};
//The first set of brackets is for the entire array and the
//Second set of brackets is for the Individual track names.
//The compiler can tell you have 5 strings so you don't have to tell it.
//Each string is an array(an array of arrays)


int main()
{
    printf("%c", tracks[4][2]);

    return 0;
}
