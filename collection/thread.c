#include <pthread.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

void *does_not(void *a)
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        sleep(1);
        puts("Does not!");
    }

    return NULL;
}

void *does_too(void *a)
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        sleep(1);
        puts("Does too!");
    }

    return NULL;
}

int main()
{
    pthread_t t0;
    pthread_t t1;

    if(pthread_create(&t0, NULL, does_not, NULL) == -1)
        perror("Can't create thread t0");
    if(pthread_create(&t1, NULL, does_too, NULL) == -1)
        perror("Can't create thread t1");

    pthread_join(t0, NULL);
    pthread_join(t1, NULL);

    return 0;
}
