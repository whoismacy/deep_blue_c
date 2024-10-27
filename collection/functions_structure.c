#include <stdio.h>

/*
 * The function below returns a structure and represents the creation of structures dynamically
 */
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

struct point makepoint(int x, int y)
{
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

int main()
{
    struct rectangle screen;
    screen.pt1 = makepoint(12, 22);
    screen.pt2 = makepoint(81, 94);
    struct point middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);

    printf("The middle point is %i for the x coordinate and %i for the y coordinate ", middle.x, middle.y);


    return 0;
}


