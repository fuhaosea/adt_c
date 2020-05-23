#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>
#define PORT 80
#define KB 1024

int main(void){
    char req[KB] = {0};
    char res[KB] = "<html><head><title>Hello,Boy</title><body>Hello</body></html>";
    int opt = 1;
    int socket_fd = 0,new_fd = 0;
    struct sockaddr_in myaddr;
    if( (socket_fd =  socket(AF_INET,SOCK_STREAM,0)) < 0){
        perror("Socket create failed");
        exit(EXIT_FAILURE);
    }
    myaddr.sin_family = AF_INET;
    myaddr.sin_port = htons(PORT);
    myaddr.sin_addr.s_addr = INADDR_ANY;    
    opt= sizeof(myaddr);
    if (bind(socket_fd, (struct sockaddr *)&myaddr, sizeof(struct sockaddr)) < 0)
    {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }
    if ((listen(socket_fd, 2)) < 0){
        perror("Listen");
        exit(EXIT_FAILURE);
    }
    while(1){
        if( (new_fd = accept(socket_fd,(struct sockaddr *)&myaddr, (socklen_t *)&opt) ) < 0){
            perror("Create new_fd faild:");
            exit(-1);
        }
        read(new_fd, req, KB);
        send(new_fd,res,strlen(res),0);
        close(new_fd); 
    }
    return 0;
}