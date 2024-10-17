#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//exec() function, used to execute a file and they replace the current process image with a new process image when they are called
//Ther are two groups of exec functions, list and array functions
//list -> execl(),execlp(),execle()
//array -> execv(),execvp(),execve()

int main()
{
    if(execl("/usr/sbin/ip","/usr/bin/ip","-h", "-V","-p", NULL) == -1)
        if(execlp("ipconfig", "ipconfig", NULL) == -1 )
        {
            fprintf(stderr, "Cannot run ipconfig: %s", strerror(errno));
            return 1;
        }
    return 0;
}
