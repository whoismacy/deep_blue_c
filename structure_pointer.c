#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

int main()
{
    struct point origin, *pp;
    pp = &origin;
    (*pp).x = 28;
    (*pp).y = 12;

    struct rectangle r, *rp = &r;

    r.p1.x = 19;
    r.p1.y = 24;
    rp->p2.x = 36;
    rp->p2.y = 18;
    
    printf("The values are %i %i\n", pp->y, pp->x);  //To access the value of x and y from the pointer pp you can use pp->x or (*pp).x

    printf("Rectangle values are p1x = %i p2x = %i p1y = %i p2y = %i", rp->p1.x, rp->p2.x, rp->p1.y, rp->p2.y);
    return 0;
}
