#include <stdio.h>
int main(){
    int score,make;
    scanf("%d",&score);
    make=score/10;
    switch (make){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("grade;e\n");break;
        case 6:{printf("grade;d\n");break;}
        case 7:{printf("grade;c\n");break;}
        case 8:{printf("grade;b\n");break;}
        case 9:{printf("grade;a\n");break;}
        case 10:{printf("grade;a+\n");break;}
        default:{printf("Input error\n");break;}
    }
    return 0;
}
