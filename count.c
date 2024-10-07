#include <stdio.h>

int main()
{
    int nums[10];
    int i;
    int positive_count = 0;
    int negative_count = 0;

    char character[3];

    printf("Input 10 numbers may be positive or negative.\n");
    for(i = 0; i < 10; i++)
    {
        scanf(" %i", &nums[i]);
        if(nums[i] < 0)
        {
            negative_count++;
        }
        else
        {
            positive_count++;
        }
    }


    printf("Would you like to know the count of the positive and negative values ?\n");
    scanf(" %c", character);

    if(character[0] == 'y')
    {
        printf("The positive count is: %i, while the negative count is: %i\n", positive_count, negative_count);
    }
    return 0;
}

