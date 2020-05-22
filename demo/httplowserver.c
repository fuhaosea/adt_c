// Server side on Linux/GNU
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 80
#define FILESIZE 1000
#define REQSIZE 3000
// This server's name is fox.
struct
{
    char *root;
    char *hostname;
}cfg;

int cfg_init(char *root,char *hostname){
    cfg.root = root;
    cfg.hostname = hostname;
    return 0;
}
int readFile(char container[FILESIZE],char *name){
    FILE *fp;
    char url[40] = "";
    strcat(url,cfg.root);
    strcat(url,name);
    int count;

    if ((  fp = fopen(url,"r")) == NULL)
    {
        char url[40] = "";
        strcat(url, cfg.root);
        strcat(url, "404.html");
        fp = fopen(url, "r");
        puts("404");
    }
    for (count = 0; ( container[count] = fgetc(fp)) != EOF; count++)
    {
    }
    fclose(fp);
    container[count] = '\0';
    return count;
}
int server_init(int *server_fd, struct sockaddr_in *address, int addrlen)
{
    int opt = 1;    
    // Creating socket file descriptor
    if ((*server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket create failed");
        exit(EXIT_FAILURE);
    }
    // Forcefully attaching socket to the port 80
    if (setsockopt(*server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                   &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address ->sin_family = AF_INET;
    address ->sin_addr.s_addr = INADDR_ANY;
    address ->sin_port = htons(PORT);
    if (bind(*server_fd,address, addrlen) < 0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(*server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    return 0;
}
int parse_req(char *req,char * target){
    char *key = "GET";
    int target_size = 0;
    for(int item = 0;item < REQSIZE -1;item++){
        if(req[item] == '/'){
            item++;
            for(target_size=0;req[item] != ' ';target_size++,item++){
              target[target_size] = req[item]; 
            }


            return 0;
        }
    }
    return -1;
}
int send_res(int new_socket,char *req_name){
    char response[FILESIZE];
    readFile(response,req_name);

    send(new_socket, response, strlen(response), 0);
    close(new_socket);  
    return 0;
}
int main(int argc, char *argv[])
{


    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    char req[REQSIZE] = "";
    char target[32] = "index.html";
    cfg_init("/var/www/","fuhaoc.cn");
    server_init(&server_fd,&address,addrlen);

    while (1)
    {
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
    }
    printf("\nReq :\n%s",req);
    read(new_socket, req, REQSIZE);   
    parse_req(req,target);
    send_res(new_socket,target);
    }
    


    return 0;
}
