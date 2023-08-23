#include<stdio.h>
int main() {

    int a[10];
    int i,a2[10];

    for(i =0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++) {
        a2[i] = a[9-i];
        printf("%d ", a2[i]);
    }

    return 0;
}