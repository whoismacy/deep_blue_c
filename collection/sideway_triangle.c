#include <stdio.h>

int main()
{
    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    for(int k = 0; k < 4; k++)
    {
        for(int l = 0; l < 4 - k; l++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
