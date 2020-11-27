#include <stdio.h>
#include <string.h>
#define Errorm "error"

int r_test(const char * arg_path);
int w_test(const char * arg_path);
int a_test(const char * arg_path);
char * test_path = "/www.txt";

int main(void){
   a_test(test_path);
    return 0;
}

int r_test(const char * arg_path){

    FILE * fp = NULL;
    char c = 0;

    fp = fopen(arg_path,"r");
    if( fp == NULL){
        puts(arg_path);
        perror(Errorm);
        return -1;
    }
    while(  (c = fgetc(fp) )  != EOF){putchar(c);}
    fclose(fp);
    return 0;
}

int w_test(const char * arg_path){

    FILE * fp = NULL;
    char c = 65;

    fp = fopen(arg_path,"w");
    if( fp == NULL){
        puts(arg_path);
        perror(Errorm);
        return -1;
    }
    while( c < 92 ){
        fputc(c,fp);
        putchar(c);
        c++;
    }
    fclose(fp);
    return 0;
}
int a_test(const char * arg_path){

    FILE * fp = NULL;
    char c = 65;

    fp = fopen(arg_path,"a");
    if( fp == NULL){
        puts(arg_path);
        perror(Errorm);
        return -1;
    }
    while( c < 91 ){
        fputc(c,fp);
        putchar(c);
        c++;
    }
    fclose(fp);
    return 0;
}