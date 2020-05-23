#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char *name;
    int age;
}person;

void inputText(char *top,char str[],int length){
    int c = 0;
    printf("\n%s:",top);
    
    for(int item = 0;  ((c = getchar()) != '\n') && item < length ;item++){
        if(c >= 65 && c <= 90){
            c -=26;
        }
        if( (c <=59 && c >=48) || (c >= 97 && c <= 122)){
            str[item] = (char)c;
        }
        else
        {
            item--;
        }
        
    }
}
int main(void){
    char str[100];
    char *top= "WELCOME";
    person *me = malloc(sizeof(person));
    me -> name = "Fuhao";
    me -> age = 22;
    printf("\nName: %s,\t Age :%d\n",me -> name,me -> age);
    free(me);
    inputText(top,str,100);
    printf("\nString is %s\n",str);
    return 0;
}
//48==0,57==9
//65==A,90==Z
//97==a,122=z