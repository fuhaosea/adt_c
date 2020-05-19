#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char dataname[10] = "fuhao";
static char datapassword[10] = "123";

typedef struct 
{
    char *username;
    int age;
    char *password;

}user;

void login(user * me){
    char *ps = me->password;
    if(strcmp(datapassword,ps) == 0){
        puts("Login is Successd");
    }
}

void inputText(char *tip,char *text,int length){
    char c = '\0';
    printf("\n%s",tip);
    for(int item = 0;item < length;item++){
        text[item] = '\0';
    }
   
    for(int item = 0;(c = getchar());item++){
        if((c >= 48 && c <= 58)  || (c >= 64 && c <= 70)){
            text[item]=c;
        }
        else
        {
            return item;
        }
        
    }
    return 0;
}
int main(void){

    char name[10] = "";
    char password[10] = "";
    user * me;

    puts("Please input your name:");
    for(int item = 0;(name[item] = getchar()) != '\n';item++){

    }
    puts("Please input your password:");
    for (int item = 0; (password[item] = getchar()) != '\n'; item++)
    {
    }
    password[3] = '\0';
    me ->username = name;
    me ->password = password;
 
    login(me);
    printf("\nName is %s, Age is %s\n",me->username,me->password);
    return 0;
}