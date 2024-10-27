#include <stdio.h>

//A union unlike a struct only uses the space for just one of the fields in its definition, if you have multiple fields the computer will give the union enough space for its largest field and leaveit upto you which value you would like to store.
typedef union
{
    short count;//A short takes two bytes while a float takes 4 bytes therefore allocate
    float weight;//space will be of 4 bytes.
    float volume;
}quantity;

int main()
{
    //quantity q = {4};//C89 style, sets the first field in the union to avoid ambiguity.
    quantity q = {.weight=1.5};//Designated Initializer sets the value to the one specified, Can also be used in structs.
    //You could also use the dot notation; where you first initialize the union.
    return 0;
}
