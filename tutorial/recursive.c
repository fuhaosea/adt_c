#include <stdio.h>

double test(int length){
    if(length == 1 || length < 1){
        return 1;
    }

    return  length *  test(length - 1);
}

int fibonaci(int i)
{
   if(i == 0 || i == 1)
   {
      return i;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}
int main(){
    double value = test(10);
    printf("\nValue is %f",value);
    value = fibonaci(10);
    printf("\nFBValue is %f\n",value);
}