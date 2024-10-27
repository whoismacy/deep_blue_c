#include <stdio.h>
#include <stdlib.h>

//Simple Calendar using C.

    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void calendar_printer(int year)
{
    if (year >= 1000)
    {
        for(int i = 0; i < 12; i++)
        {
            printf("------------------ %s ------------------\n", month[i]);
            printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat  Sun \n"); 

            if(month[i] == "January" || month[i] == "March" || month[i] == "May" || month[i] == "July" || month[i] == "August" || month[i] == "October" || month[i] == "December")
            {
                for (int j = 1; j < 32; j++)
                    {
                        printf("%5i", j);

                        if (j % 7 == 0)
                        {
                            printf("\n");
                        }

                    }

                printf("\n");
                printf("\n");
            }
            else if(month[i] == "April" || month[i] == "June" || month[i] == "September" || month[i] == "November")
            {
                for (int k = 1; k < 31; k++)
                {
                    printf("%5i", k);

                    if( k % 7 == 0)
                    {
                        printf("\n");
                    }

                }
                printf("\n");
                printf("\n");
            }
            else if (month[i] == "February")
            {
                if(year % 2 != 0)
                {
                    for(int l = 1; l < 29; l++)
                    {
                        printf("%5i", l);

                        if ( l % 7 == 0 )
                        {
                            printf("\n");
                        }

                    printf("\n");
                    }

                   }
                else if(year % 2 == 0)
                {
                    for(int m = 1; m < 30; m++)
                    {
                        printf("%5i", m);

                        if (m % 7 == 0)
                        {
                            printf("\n");
                        }
                    }
                    printf("\n");
                }

          }

        }

    }

}



int main()
{
    system("Color 3F");
    calendar_printer(2024);

    return 0;
}




