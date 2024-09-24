#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

struct point makepoint(int x, int y)
{
    struct point temporary;

    temporary.x = x;
    temporary.y = y;
    return temporary;
}

int main() 
{
    struct point p1 = makepoint(21, 31);
    struct point p2 = makepoint(41, 51);

    p1 = addpoint(p1, p2);

    printf("The value after addition is %i for x and %i for y", p1.x, p2.y);

    return 0;
}




