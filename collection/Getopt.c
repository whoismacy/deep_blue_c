#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while((ch = getopt(argc, argv, "d:t")) != EOF)
    {
        switch(ch)
        {
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            case '?':
                if(optopt == 'd')
                {
                    fprintf(stderr, "Option -%c requires an argument.\n", optopt);
                }
                else
                {
                    fprintf(stderr, "Unknown option: -%c\n", optopt);
                }
                return 1;
            default:
                fprintf(stderr, "Unknown options: '%s'\n", optarg);
                return 2;

        }
    }

        argc -= optind;
        argv += optind;

        if(thick)
            puts("Thick crust.");
        if(delivery[0])
            printf("To be delivered %s.\n", delivery);

        puts("Ingredients:");
        for(count = 0; count < argc; count++)
            puts(argv[count]);


        return 0;

}
