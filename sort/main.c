#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "./bubble.c"
#include "./select.c"
#define DATASIZE 500

int init(int * nums);

int main(int argc,char * argv[]){
    srand((unsigned)time(NULL));
    int nums[DATASIZE];
    init(nums);
    puts("Init Data SUCCESS");

    bubble(DATASIZE,nums);
    // quick(DATASIZE,nums);
    // select(DATASIZE,nums);

    return 0;

}

int init(int * nums){
    int item = 0;
    for(item = 0;item < DATASIZE ; item++){  
        nums[item] = rand() % DATASIZE;
    }
    return 0;
}

int check(int size ,int nums[]){
    for(int item = 0;item < size;item++){
        if(nums[0] > nums[item]){
            printf("\nERROR ITEM is %d\nValue is %d",item,nums[item]);
            puts("Result is Error");
            return -1;
        }

    }
    puts("Result is OK!");
    return 0;
}