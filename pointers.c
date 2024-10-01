#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %li bytes\n", sizeof(msg));
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    //printf("Avast! Now at : [%i, %i]\n", latitude, longitude);
    fortune_cookie("Cookies make you fat");
    return 0;
}
