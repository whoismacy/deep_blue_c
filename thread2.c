#include <stdio.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

pthread_mutex_t a_lock = PTHREAD_MUTEX_INITIALIZER;

int beers = 2000000;
void *drink_lots(void *a)
{
    pthread_mutex_lock(&a_lock);
    int i;
    for(i = 0; i < 100000; i++)
    {
        beers = beers - 1;
    }
    pthread_mutex_unlock(&a_lock);

    return NULL;
}

int main()
{
    pthread_t threads[20];
    int t; printf("%i bottles of beer on the wall\n%i bottles of beer\n", beers, beers);

    for (t = 0; t < 20; t++)
    {
        if (pthread_create(&threads[t], NULL, drink_lots, NULL) == -1)
        {
            perror("Can't create thread");
        }
    }

    void *result;
    for(t = 0; t < 20; t++)
    {
        if(pthread_join(threads[t], &result) == -1)
        {
            perror("Can't join thread(s)");
        }
    }

    printf("There are now %i bottles of beer on the wall\n", beers);
    return 0;
}
   
