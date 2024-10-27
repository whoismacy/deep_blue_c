#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//A variadic function, is a function that takes a variable number of parameters.
//Involve use of macros{functions that can modify the source code}.
//Included in the stdarg.h library {ensure you include it}

double total(int args, ...)
{
    double total = 0;

    va_list ap;

    va_start(ap, args);

    int i;

    for(i = 0; i < args; i++)
    {
        int num = va_arg(ap, double);

        total += num;

    }

    va_end(ap);

    return total;

}


int main()
{
    double total_amount = total(8,7.6,3.2,5.1,6.4,3.1,7.2,4.2,1.1);//The first value is the number of arguments that precede it.

    printf("The total amount is %f", total_amount);

    return 0;
}
