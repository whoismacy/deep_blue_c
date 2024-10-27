#include <stdio.h>
#include <unistd.h>

int main()
{
    FILE *my_file;

    if(!(my_file = fopen("exec.c", "r")))
    {
        fprintf(stderr, "Can't open this file.\n");
        return 1;
    }
    
    int descriptor = fileno(my_file);
    printf("The value of file descriptor is %i", descriptor); 
    fclose(my_file);
    return 0;
}
