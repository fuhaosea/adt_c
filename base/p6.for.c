#include <stdio.h>

int main(){
    char key[26] = {'a'} ;
    for ( int item = 0; item < 26;item++){
        key[item+1] = key[item] + 1;
        printf("\nItem%d : %c\n",item+1,key[item]);
    }
    return 0;
}