#include <stdio.h>
#include <stdlib.h>

int main(void){

    puts("Char:");
    printf("\nChar's Size is :%d",sizeof(char));
    printf("\nSigned Char's Size is :%d",sizeof(signed char));
    printf("\nUnsigned Char's Size is :%d\n",sizeof(unsigned char));
    puts("Short");
    printf("\nShort's Size is :%d",sizeof(short));
    printf("\nSigned short's Size is :%d",sizeof(signed short ));
    printf("\nUnsiged short's Size is :%d\n",sizeof(unsigned short));    
    puts("Int");
    printf("\nInt's Size is :%d",sizeof(int));
    printf("\nSigned Int's Size is :%d",sizeof(signed int ));
    printf("\nUnsiged Int's Size is :%d\n",sizeof(unsigned int));
    puts("Long");
    printf("\nlong's Size is :%d",sizeof(long));
    printf("\nSigned long's Size is :%d",sizeof(signed long ));
    printf("\nUnsiged long's Size is :%d\n",sizeof(unsigned long));
    puts("Float");
    printf("\nFloat's Size is :%d\n",sizeof(float));
    puts("Double");
    printf("\nDouble's Size is :%d",sizeof(double));
    printf("\nLong Double Int's Size is :%d\n",sizeof(long double));

    return 0;
}