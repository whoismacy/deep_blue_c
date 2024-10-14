#include <stdio.h>
#include <time.h>

int main()
{
    //current time
    time_t time_function;
    time(&time_function);//Returns time using the UTC time zone
                        //for precise time use the localtime() for the system time
                        //localtime returns a pointer to struct tm
                        //It must be dereferenced to obtain the value.


  
    struct tm *newtimefunction = localtime(&time_function);

    printf("The current time is %s\n", asctime(newtimefunction));
 
    time_t new_time;
    time(&new_time);
    
    struct tm *localtime_function = localtime(&new_time);
    
    int month = localtime_function->tm_mon;
    int day =  localtime_function->tm_wday;
    int n_day = localtime_function->tm_yday;
    int year = localtime_function ->tm_year;
    
    printf("Using the localtime() function we get today is the %i day of the week we are in the %i day of the year and on the %i month of the year and the year is%i \n\n",day+1, n_day+1,month+1, year+1900);

    int i;
    clock_t start = clock();

    for(i = 0; i < 999; i++)
    {
        if(i % 999 == 1)
        {
            printf("This is the value of i = %i\n",i);
        }
    }
    clock_t end = clock();

    double total_process_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("The difference in time using  end - start / CLOCKS_PER_SEC is %f\n", total_process_time);

    return 0;

}
