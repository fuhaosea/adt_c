#include <stdio.h>
#include <stdlib.h>

int main(void){
    int * me = NULL;
    int *age = NULL;
    int strs[10] = {0};
    strs[1] = 999;
    strs[2] = 6666;    
    me = strs+2;
    puts("H");
    age = strs;
    for(int item = 0 ;item < 10; item++){
        printf("\nTest%d:    Address    %d  Value   %d",item,age + item,*(age + item));
    }
    exit(0);
    return 0;
}