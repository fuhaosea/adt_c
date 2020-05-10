#include <stdio.h>

int main(){
    char a = 'a';
    if(NULL){puts("Nothing");}
    switch (a)
    {
    case 'a':
        putchar('a');
        // break;
    case 'b':
         putchar('a');
        break;   
    default:
    putchar('o');
        break;
    }
    return 0;
}