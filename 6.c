#include<stdio.h>
int main(){
    char A[500];
    int i,count=0;
    gets(A);
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='h' && A[i+1]=='e' && A[i+2]=='l' && A[i+3]=='l' && A[i+4]=='o'){
            count++;
        }
    }
    printf("%d\n",count);
}