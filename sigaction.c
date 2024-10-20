#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>

int catch_signal(int sig, void(*handler)(int))
{
    struct sigaction action;
    action.sa_handler = handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    return sigaction(sig, &action, NULL);
}

 void diediedie(int sig)
{
    puts("Goodbye cruel world...\n");
    exit(1);
}

void handle_interrupt(int sig)
{
    if(sig == 2)
    {
        printf("\nEncountered a SIGINT signal, Goodbye.\n");
    }
    else if(sig == SIGTSTP)
    {
        printf("\nEncountered a SIGTSTP signal(CTRL+Z), goodbye.\n");
    }
    else if(sig == 9)
    {
        printf("\nEncountered a SIGKILL signal, goodbye......\n");
    }
    else if(sig == 15)
    {
        printf("\nEncountered a SIGTERM signal, goodbye...........\n");
    }
    else
    {
        printf("\nUnknown error\n");
    }
}

int main()
{
    if(catch_signal(SIGINT, handle_interrupt) == -1)
    {
        fprintf(stderr, "Can't map the handler");
        exit(2);
    }

    char name[30];
    printf("Enter your name: ");
    fgets(name, 30, stdin);
    printf("Hello %s\n", name);
    return 0; 
}
