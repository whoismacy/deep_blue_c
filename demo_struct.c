#include <stdio.h>
struct exercise
{
    const char *description;
    float duration;
};
struct meal
{
    const char *ingredients;
    float weight;
};
struct preferences
{
    const char *food;
    float exercise_hours;
    struct exercise exercises;
 };

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 6.5, {"swim in the jacuzzi", 7.5}}};
    printf("Name = %s\n", snappy.name);
    printf("Smappy enjoys eating %s\n", snappy.care.food);
    printf("Snappy should spend %f hours exercising and his favourite exercise is %s", snappy.care.exercise_hours, snappy.care.exercises.description);

    return 0;
}
