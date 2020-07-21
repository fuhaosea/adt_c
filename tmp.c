#include <stdio.h>
#include <stdlib.h>
//棋盘长度
#define LENGTH 15
int print_pan(int  pan[LENGTH][LENGTH]){
    for(int xitem = 0;xitem < LENGTH;xitem++){

        printf("|");
        for(int yitem = 0; yitem < LENGTH ; yitem++){

            printf("%-2c|",pan[xitem][yitem]);
        }
        printf("\n");
    }
    return 0;
}

int set_value(int pan[LENGTH][LENGTH], int x, int y,int value){
    pan[x][y] = value;
    return 0;
}
int input_value( int pan[LENGTH][LENGTH], int *x ,int *y){
    puts("Please input Vlues:");
    scanf("%d %d ",x,y);
    return 0;
}

int check_pan(int pan[LENGTH][LENGTH]){

    return 0;
}



int main(void){
    int pan[LENGTH][LENGTH] = {0};
    char white = 'x',black = 'o';
    int x = 0,y = 0;
    int success = 0;
    int pan_size = 0;
    while(1){
        input_value(pan,&x , &y);
        if(pan_size % 2){
            set_value(pan,x,y,white);
        }
        else{
            set_value(pan,x,y,black);
        }
        print_pan(pan);
        pan_size++;

        if( success = check_pan(pan) ){
            printf("\n%c is Success",success);   
            break;
        }
    }
    return 0;
}