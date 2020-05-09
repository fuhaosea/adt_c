#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc,char * argv[]){
    FILE *fp;
    int errnum;
    fp = fopen(argv[1],"rb");
    if(fp == NULL){
        fprintf(stderr,"1Error FILENAME Number%d\n",errno);
        perror("2通过 perror 输出错误\n");
      fprintf(stderr, "3打开文件错误: %s\n", strerror( errnum ));
    }
    else
    {
        fclose(fp);
        puts("File Close!!!");
    }
    
    return 0;
}