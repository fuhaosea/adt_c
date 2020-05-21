#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    FILE *fp;
    char c = '\0';
    char buff[100];
    char hello[10];
    char name[10];
    int count = 0;
    if(argv[1] == NULL){
        argv[1] = "hello.txt";
    }    
    fp = fopen(argv[1],"r");
    printf("\nAddress is %p",fp);
    if(fp == NULL){puts("File is not found!!!");exit(-1);}
    for(int item = 0; c != EOF;item++){
        c  =fgetc(fp);        
        buff[item] = c;
        putchar(c);
        count++;

    }
    for(int item = 0;buff[item] != '\0';item++){
        if(buff[item] != ','){
            hello[item] = buff[item];

        }
        else
        {
            break;
        }
        
    }
    fclose(fp);
    printf("\nFile is %s \nFileSize : %d",hello,count);
    return 0;
}