#include<stdio.h>
int main() {

    int i;
    int a[10];
    for(i=0; i<10; i++) {

        scanf("%d",&a[i]);

        if(a[0]<a[i]) {
            a[0] = a[i];
        }
    }
    printf("%d\n",a[0]);
    return 0;
}