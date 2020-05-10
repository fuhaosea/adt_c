#include <stdio.h>
// List :auto extern static register
// auto is every local variable 's default Storage Class Value.
//auto int age = 9999; == int age = 9999;
extern int name1;
extern int name2;

int staticFun(){
    static int age = 99;
    age++;
    printf("\nMy age is %d\n",age);
    return 0;
}

int main(void){
    int jack = 9;
    auto int bob = 9;
    register int fox = 99;
    printf("\nAddress is %p:%p\n",&jack,&bob);
    if(jack == bob){
        puts("你们的长度一样啊！！！");
    }
    printf("\nExtern name1 is %d,Name2 is %d\n",name1,name2 );
    name1++;
    name2++;
    staticFun();
    staticFun();
    return 0;
}
