#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *feeds[] = {"http://www.cnn.com/rss/celebs.xml", "http://www.rollingstone.com/rock.xml", "http://eonline.com/gossip.xml"};

    int times = 3;
    char *phrase = argv[1];
    int i;
    for(i = 0; i < times; i++)
    {
        char var[255];
        sprintf(var, "RSS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};

        if(execle("/usr/bin/python3", "/usr/bin/python3","./rssgossip.py", phrase, NULL, vars) == -1)
        {
            fprintf(stderr, "Can't run script: %s\n", strerror(errno));
            return 1;
        }
    }

    return 0;
}
