
#ifndef STDIO
#define STDIO <stdio.h>
#endif
#include STDIO
#include <stdlib.h>
#include <string.h>
#include "lib/tool.h"
#include "lib/sysinfo.h"
#include "code1/index.h"
#define swap(a,b)  a = ( b += (a = a -b)) - a

typedef struct People {
    char * name;
}PO;


int main(int argc , char * args[]){
    int * ar = (int *)malloc(sizeof(int) * 10);
    for(int item = 0;item < 10; item++){
        ar[item] = item * item;
        printf("\nValue is %d\n",ar[item]);
    }
    printf("\nValue %d is %d\n",*(ar + 8),sizeof ar[10]);
    printf("\nArgs is %d",strlen(args[0]));
    return 0;
}