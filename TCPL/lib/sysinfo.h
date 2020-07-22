#ifdef SYSINFO
#include <limits.h>
#endif
#include <stdio.h>
#include <limits.h>
void show_limit(void){
    
    puts("CHAR's Limit:");
    printf("Size of char is :%d\n",sizeof(char));
    printf("\n  CHAR_BIT:\t%d\n",CHAR_BIT);
    printf("\n  SCHAR_MIN:\t%d\n",SCHAR_MIN);
    printf("\n  SCHAR_MAX:\t%d\n",SCHAR_MAX);
    printf("\n  UCHAR_MAX:\t%d\n",UCHAR_MAX);
    printf("\n  CHAR_MIN:\t%d\n",CHAR_MIN);
    printf("\n  CHAR_MAX:\t%d\n",CHAR_MAX);
    printf("\n  MB_LEN_MAX:\t%d\n",MB_LEN_MAX);

    
    puts("SHORT's Limit:");
    printf("Size of short is :%d\n",sizeof(short));
    printf("\n  SHRT_MIN:\t%d\n",SHRT_MIN);
    printf("\n  SHRT_MAX:\t%d\n",SHRT_MAX);
    printf("\n  USHRT_MAX:\t%d\n",USHRT_MAX);
    

    puts("INT:'s Limit");
    printf("Size of int is :%d\n",sizeof(int));
    printf("\n  INT_MIN:\t%d\n",INT_MIN);
    printf("\n  INT_MAX:\t%d\n",INT_MAX);
    printf("\n  UINT_MAX:\t%lld\n",UINT_MAX);

    
    puts("LONG's Limit");
    printf("Size of long is :%d\n",sizeof(long));
    printf("\n  LONG_MIN:\t%ld\n",LONG_MIN);
    printf("\n  LONG_MAX:\t%ld\n",LONG_MAX);
    printf("\n  ULONG_MAX:\t%lld\n",ULONG_MAX);
}
