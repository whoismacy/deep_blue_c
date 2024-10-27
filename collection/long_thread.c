#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <pthread.h>

//passing long values to thread functions up close

void *do_stuff(void *param)
{
    long thread_no = (long)param;
    printf("Thread number %ld\n", thread_no);
    return (void*)(thread_no + 1);
}

int main()
{
    pthread_t threads[20];
    long t;

    for(t = 0; t < 3; t++)
    {
        pthread_create(&threads[t], NULL, do_stuff, (void*)t);
    }
    
    void *result;

    for(t = 0; t < 3; t++)
    {
        pthread_join(threads[t], &result);
        printf("Thead %ld returned %ld\n", t, (long)result);
    }

    return 0;

}

