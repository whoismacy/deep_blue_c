#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point pt1;
    struct point pt2;
};

int main()
{
    struct rectangle screen;

    screen.pt1.x = 13;
    screen.pt1.y = 12;

    screen.pt2.x = 9;
    screen.pt2.y = 8;

    printf("The coordinates are %i %i %i %i", screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);

    return 0;

}


