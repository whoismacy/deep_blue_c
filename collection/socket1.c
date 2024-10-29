#include <sys/socket.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h> //required for creating internet addresses

int main()
{
    char *advice[] = {
        "Take smaller bites\r\n",
        "Go for the tight jeans. No they do NOT make you look fat.\r\n",
        "One word: inappropriate\r\n",
        "Just for today, be honest. Tell your boss what you really think \r\n",
        "You might want to rethink that haircut\r\n"
    };
    //socket(domain/protocol(ipv4/ipv6), type(UDP/TCP), defaultprotocol 0);
    //socket(AF_INET/AF_INET6, SOCK_STREAM/SOCK_DGRAM, 0)
    int listener_d = socket(AF_INET, SOCK_STREAM, 0);
    
    //creating Internet addresses
    //in_port_t a type definition used in sockaddr_in structure to represent a 16-bit unsigned integer (for the port).
    //htons() "host to network short" converts a 16 bit integer from the host byte order to the network byte order
    //htonl() converts a 32 bit integer, often used for IP addresses from the host byte order to the network byte order
    //INADDR_ANY a constant that represents the IP address 0.0.0.0 when assigned to sin_addr.s_addr is telling the socket to bind to all network interfaces on the host.
    //s_addr used to store a 32-bit ipv4 address in network byte order

    struct sockaddr_in name;
    name.sin_family = AF_INET;
    name.sin_port = (in_port_t)htons(30000);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    
    //when you bind to a port OS will prevent anything rebinding to it for the next 30 seconds, to get around the problem you just need to set an option before you bind it
   
    int reuse = 1;
    if(setsockopt(listener_d, SOL_SOCKET, SO_REUSEADDR, (char *)&reuse, sizeof(int)) == -1)
        perror("Can't set the reuse option on the socket.");

    int c = bind(listener_d, (struct sockaddr *)&name, sizeof(name));

    //listen(socketfd, lengthofqueue)

    if(listen(listener_d, 10) == -1)
        perror("Can't listen");
    
    //After binding and listening accept() waits until a client contacts the server and then it returns a second socket descriptor that you can use to hold a conversation on.

    while(1)
    {
        struct sockaddr_storage client;
        unsigned int address = sizeof(client);
        int connect = accept(listener_d, (struct sockaddr *)&client, &address);

        char *msg = advice[rand() % 5];
        send(connect, msg, strlen(msg), 0);
        close(connect);
    }

    return 0;
}

 
