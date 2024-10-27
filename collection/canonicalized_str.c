#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

struct point{
    int x;
    int y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

struct rectangle canonalizedrect(struct rectangle r)
{
    struct rectangle temp;

    temp.p1.x = min(r.p1.x, r.p2.x);
    temp.p1.y = min(r.p1.y, r.p2.y);
    temp.p2.x = max(r.p1.x, r.p2.x);
    temp.p2.y = max(r.p1.y, r.p2.y);

    return temp;
}

int main()
{
    struct rectangle rect;

    rect.p1 = (struct point){52, 10};
    rect.p2 = (struct point){12, 42};

    struct rectangle canonicalized = canonalizedrect(rect);

    printf("Canonical rectangle: point1(%d, %d), P2(%i, %i)", canonicalized.p1.x, canonicalized.p1.y, canonicalized.p2.x, canonicalized.p2.y);

    return 0;

}
