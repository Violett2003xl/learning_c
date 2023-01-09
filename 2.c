#include<stdio.h>
void abc (int n){
    int i,j;
    for ( i = 1; i <= n; i++ )
    {
        for (j=1 ; j <= n-1 ; j++)
        {
            putchar(' ');
        }
        for ( j = 1; j <= i; j++)
        {
            printf("%d\n",i);
        putchar('\n');    
        }

    }
}    