#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int use_malloc(void);
int use_calloc(void);
int use_realloc(void);

int main(void){
    use_malloc();
    use_realloc();
    use_calloc();
    return 0;

}
int use_malloc(void){
    char * me ;
    me =(char *) malloc(1000 * sizeof(char));
    if(me == NULL){
        puts("ERROR");
    }
    me = strcpy(me,"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");

    printf("\nMalloc Value is %s\n",me);
    free(me);
    return 0;
}
int use_calloc(void){
    char * me ;
    me =(char *) calloc(1000 , sizeof(char));
    if(me == NULL){
        puts("ERROR");
    }
    strcpy(me,"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
    printf("\nCalloc Value is %s\n",me);
    free(me);
    return 0;
}
int use_realloc(void){
    char * me ;
    me =(char *) calloc(100 , sizeof(char));
    if(me == NULL){
        puts("ERROR");
    }
    me = (char *)realloc(me,1000 * sizeof(char));
    strcpy(me,"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff");
    printf("\nRealloc Value is %s\n",me);
    free(me);

    return 0;
}