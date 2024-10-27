#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point pt;
    pt.x = 32;
    pt.y = 10;

    double dist;
    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

    printf("The distance is %lf", dist);

    return 0;
}

