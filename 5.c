#include<stdio.h>
int main() {
    int A[10];
    int i;
    
    for(i=0; i<10; i++) {
        scanf("%d", &A[i]);
        if(A[i]<0) {
            A[i]=1;
        }   
    }
    for(i=0; i<10; i++) {
        printf("X[%d]\t=\t%d\n",i,A[i]);
    }
    return 0;
}