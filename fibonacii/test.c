#include <stdio.h>
/*
f(0) = 1
f(1) = 1
when x >=2 , f(x) = f(x-1) + f(x-2)
try to define a func to calc this problem
*/
int f(int num){
    if (num < 0) return 0;
    if (num == 0 || num == 1){
        return 1;
    }
    return f(num-1) + f(num-2);
}
void test(){
    for (int i = 0;i < 10;i++){
        int result = f(i);
        printf("%d\n",result);
    }
}
int main(int argc,char *argv[],char *envp[]){
    test();
    return 0;
}