#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "./bubble.c"
#include "./my_select.c"
#define DATASIZE 5000000

int show(int nums[DATASIZE]);
int init(int * nums);
int realRand(void);
int check(int size ,int nums[]);

int main(int argc,char * argv[]){
    srand((unsigned)time(NULL));//random seed
    int nums[DATASIZE] = {1,432,4,321,43,2,14,32,14,321,4,32,43,21,43,214,32,14,32,14,321,435,4,6,54,76565,555555,666666,65,476,547,65,47,654,100};
    init(nums);
    //if function strcmp(str1,str2) return 0 ,so str1 == str2
    if(strcmp(argv[1],"bubble") == 0){
        bubble(DATASIZE,nums);
    }
    // if(strcmp(argv[1],"quick") == 0){
    //     quick(DATASIZE,nums);
    // }
    if(strcmp(argv[1],"select") == 0){
        my_select(DATASIZE,nums);
    }
    // if(strcmp(argv[1],"insert") == 0){
    //     insert(DATASIZE,nums);
    // }
    // show(nums);
    if(check(DATASIZE,nums) == -1 ){
        show(nums);
    }
    return 0;

}

int show(int * nums){
    int item = 0;
    for(item = 0;item < DATASIZE ; item++){
        printf("\nItem %d 's Value :%d\n",item + 1,nums[item]);
    }
    return 0;
}
int init(int * nums){
    int item = 0;
    for(item = 0;item < DATASIZE ; item++){
        if(nums[item] == 0){
            nums[item] = realRand() % DATASIZE;
            
        }
    }
    return 0;
}
int realRand(void){
    int res;
    res = rand();
    return res;
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