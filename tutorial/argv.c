#include <stdio.h>
#include <stdarg.h>
double get_value(int length,...);

int main(int argc,char *argv[]){
    for(int item = 0;item < argc;item++){
        printf("\nArg %d is %s\n",item ,argv[item]);
    }
    printf("\n Value is %f\n",get_value(4,97,75,25,3));
    
    return 0;
}
double get_value(int length,...){
    va_list vList;
    va_start(vList,length);
    int sum = 0;
    for(int item = 0; item < length;item++){
        
        sum += va_arg(vList,int);

    }
    va_end(vList);
    return sum / length;
}