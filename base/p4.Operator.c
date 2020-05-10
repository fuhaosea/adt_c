#include <stdio.h>
#include <math.h>

void test(){
    int a = 9;
    int b = 3;
    puts("a=9,b=3");
    printf("\na + b = %d",a + b);
    printf("\na - b = %d",a - b);
    printf("\na * b = %d",a * b);
    printf("\na / b = %d",a / b);
    printf("\na %% b = %d",a % b);
    printf("\na++ = %d,a:%d",a++,a);
    printf("\nb-- = %d,b:%d\n",b--,b);
//== != >= <= < > 
    if(1== 1 && 2 == 2){
        puts("&&");
    }
    if(1== 1 || 2 == 1)
        puts("||");
    if(9 != 8){
        puts("!");
    }
}
// int bit(int num,char bitstr[]){
//     for(int item = 0;num != 0; item++){
//         if(pow(2,item) >= num){
//             bitstr[item] = '1';
//         }
//     }
// }
int main(){
    int bita = 15;
    int bitb = 3;
    char bitstr[]={};
    printf("\n~a = %d",bita >> 2);
    // test();
    return 0;
}
//sizeof()
//&
//*
//?: