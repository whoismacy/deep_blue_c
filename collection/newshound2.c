#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h> //the purpose of wait is to use waitpid which will tell the parent process to wait until the child process has finished its execution.
                      //waitpid(pid, &pid_status, 0);

int main(int argc, char *argv[])
{
    char *phrase = argv[1];
    char *vars[] =  {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
    FILE *f = fopen("stories.txt", "w");

    if(!f)
    {
        perror("Can't open stories.txt");
    }

    pid_t pid = fork();

    if(pid == -1)
    {
        perror("Can't fork process");
    }

    if(!pid)
    {
        if(dup2(fileno(f), 1) == -1)
        {
            perror("Can't redirect the Standard output");
        }

        if(execle("/usr/bin/python3", "/usr/bin/python3","./rssgossip.py", phrase, NULL, vars) == -1)
        {
            fprintf(stderr, "Can't run script: %s\n", strerror(errno));
            return 1;
        }
    }
 
    int pid_status;

    if(waitpid(pid, &pid_status, 0) == -1)
    {
        perror("Error waiting for the child process");
    }

    if(WEXITSTATUS(pid_status))
        puts("Error status non-zero");

    return 0;
}
