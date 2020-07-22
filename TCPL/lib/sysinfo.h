#ifdef SYSINFO
#include <limits.h>
#endif
#include <stdio.h>
#include <limits.h>
#include <float.h>
void show_int_limit(void){

    printf("Size of char is :%d\n",sizeof(char));
    printf("Size of short is :%d\n",sizeof(short));
    printf("Size of int is :%d\n",sizeof(int));
    printf("Size of long is :%d\n",sizeof(long));

    puts("CHAR's Limit:");
    
    printf("\n  CHAR_BIT:\t%d\n",CHAR_BIT);
    printf("\n  SCHAR_MIN:\t%d\n",SCHAR_MIN);
    printf("\n  SCHAR_MAX:\t%d\n",SCHAR_MAX);
    printf("\n  UCHAR_MAX:\t%d\n",UCHAR_MAX);
    printf("\n  CHAR_MIN:\t%d\n",CHAR_MIN);
    printf("\n  CHAR_MAX:\t%d\n",CHAR_MAX);
    printf("\n  MB_LEN_MAX:\t%d\n",MB_LEN_MAX);

    
    puts("SHORT's Limit:");
    
    printf("\n  SHRT_MIN:\t%d\n",SHRT_MIN);
    printf("\n  SHRT_MAX:\t%d\n",SHRT_MAX);
    printf("\n  USHRT_MAX:\t%d\n",USHRT_MAX);
    

    puts("INT:'s Limit");
    
    printf("\n  INT_MIN:\t%d\n",INT_MIN);
    printf("\n  INT_MAX:\t%d\n",INT_MAX);
    printf("\n  UINT_MAX:\t%lld\n",UINT_MAX);

    
    puts("LONG's Limit");
    
    printf("\n  LONG_MIN:\t%ld\n",LONG_MIN);
    printf("\n  LONG_MAX:\t%ld\n",LONG_MAX);
    printf("\n  ULONG_MAX:\t%lld\n",ULONG_MAX);
}
<<<<<<< HEAD
void show_float_limit(void){
    float jack = 0.2004324;
    printf("\nSize of float: %d \nSize of double : %d\nSize of long double : %d",sizeof(float), sizeof(double),sizeof(long double));
    printf("\nFLT_MIN: %f",jack );
}
=======
>>>>>>> 2427efa9a66c8435cc959d2bef5ce0a4743c9a7c
