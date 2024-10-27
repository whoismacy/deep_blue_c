#include <stdio.h>
#include <stdarg.h>

void printf_clone(const char *format_specifier, ...);

int main()
{
    printf_clone("cifds",'c', 889, 923.23,32,"It's been a long time coming");

    return 0;
}

void printf_clone(const char *format_specifier, ...)
{
    va_list ap;

    va_start(ap, format_specifier);

    while(*format_specifier)
    {
        switch(*format_specifier)
        {
            case 's':
                printf("%s\n", va_arg(ap, char *));
                break;
                
            case 'c':
                printf("%c\n", va_arg(ap, int));
                break;

            case 'i':
                printf("%i\n", va_arg(ap, int));
                break;

            case 'f':
                printf("%f\n", va_arg(ap, double));
                break;

            case 'd':
                printf("%i\n", va_arg(ap, int));
                break;

        }
        
        format_specifier++;

    }

    va_end(ap);
}

