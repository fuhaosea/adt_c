#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define K 1024

int main(int argc,char *argv[]){
    FILE *src,*target;
    unsigned char buff[K] = {0};
    int state = K;
    if(argc != 3)perror("argument length  not 3 ");
    src = fopen(argv[1], "rb");
    target = fopen(argv[2], "wb+");
    // src = fopen("/root/c/README.md", "rb");
    // target = fopen("/root/c/RE.md", "wb+");

    if(src == NULL | target == NULL){
        perror("FilePath ");
        exit(-1);
    }
    while( state == K){
        state = fread(buff, sizeof(unsigned char), K, src);
        if(state != K){
            for (int item = 0; item < state; item++)
            {
                fputc(buff[item], target);
            }
            break;
        }
        fwrite(buff, sizeof(unsigned char), K,target);
    }

    fclose(src);
    fclose(target);

    return 0;
}