#include <stdio.h>
int main(){
    int score;
    printf("please input score: ");
    scanf("%d",&score);
    if(score < 0 || score > 100) printf("input error\n");
    else if (score == 100) printf("greade：a+\n");
    else if (score >= 90) printf("grade:a\n");
    else if (score >= 80) printf("grade:b\n");
    else if (score >= 70) printf("grade:c\n");
    else if (score >= 60) printf("grade:d\n");
    else printf("grade:e\n");
    return 0;
}