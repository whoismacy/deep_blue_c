#include <stdio.h>

int main()
{
    //sprintf in C works just like printf but instead of printing out to
    //stdin it prints out to a string buffer specified by the user.

    double pi = 3.142;
    int radius = 80;
    float area = pi * radius * radius;

    char string_buffer[200];

    sprintf(string_buffer,"The value of Pi in mathematics is %f and when multiplied with a circle of radius %i the answer is %f", pi, radius, area);

    printf("%s",string_buffer);

    return 0;
}
