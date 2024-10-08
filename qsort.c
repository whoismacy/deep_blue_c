#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//qsort; a comparator function used to decide if one piece of data is the same as, less than, or greater than another piece of data.
//
//qsort(void *array, size_t length, size-t item_size, int(*compar)(const void *, const void *));
//void *array; this is pointer to an array
//size_t length; length of an array
//size_t item_size; size of each element in the array
//*compar; pointer to a function that compares two items in the array
//const void * ; pointers that can point to anything 

int comparator_function(const void *sx, const void *sy)
{
    int a = *(int *)sx;
    int b = *(int *)sy;

    return a - b;
}

int compare_scores_desc(const void *score_a, const void *score_b)
{
    int a = *(int *)score_a;
    int b = *(int *)score_b;

    return b - a ;
}

typedef struct
{
    int width;
    int height;
}rectangle;

int compare_areas(const void *a, const void *b)
{
    rectangle *rect_a = (rectangle *)a;
    rectangle *rect_b = (rectangle *)b;

    int area_a = (rect_a->width * rect_a->height);
    int area_b = (rect_a->width * rect_a->height);

    return area_a - area_b;
}

int comapare_names(const void *a, const void *b)
{
    char **a = (char **)a;
    char **b = (char **)b;

    return strcmp(*a, *b);

}


int main() 
{
   
    int array[] = {12, 44,1,2553,25,65,77,7,3,90,321.43};

    size_t num_of_elements = sizeof(array) / sizeof(array[0]);

    qsort(array, num_of_elements, sizeof(int), comparator_function);

    printf("The new arranged array is ----->\n");

    for(size_t i = 0; i < num_of_elements; i++)
    {
        printf("Element %li is %i\n", i+1, array[i]);
    }

    return 0;
}
