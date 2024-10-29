#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <unistd.h>

//sigaction is a struct that contains a poitner to a function.
//Sigactions are used to tell the operating system which function
//it should call when a signal is sent to a process
//All custom handlers take int arguments e.g. void diedie(int sig)

//Once you've created a sigaction you have to tell the OS using sigaction(signal_no, &new_action, &old_action);
//signal_number -> integer value of the signal you want to handle.
//&new_action -> address of the new struct sigaction you want to register.
//&old_action -> address to be filled with details of current handler, else NULL

void diedie(int sig)
{
    puts("\nGoodbye Cruel world..........\n");
    exit(1);
}

int catch_signal(int sig, void(*handler)(int))
{
    struct sigaction actions;
    actions.sa_handler = handler;
    sigemptyset(&actions.sa_mask);
    actions.sa_flags = 0;

    return sigaction(sig, &actions, NULL);
}

int main()
{
    if(catch_signal(SIGINT, diedie) == -1)
    {
        fprintf(stderr, "Can't map the handler");
        exit(2);
    }

    char name[30];
    printf("Enter your name: ");
    fgets(name, 30, stdin);
    printf("HI %s\n", name);
    return 0;

}
