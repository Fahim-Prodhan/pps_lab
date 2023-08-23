#include<stdio.h>
int main() {

    int X, Y, i,rslt=0;
    scanf("%d %d", &X, &Y);

    for(i=X+1; i<Y; i++) {
        if(i%2==0) {
            rslt =rslt+i;
        }
    }
    printf("%d",rslt);

    return 0;
}