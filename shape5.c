#include<stdio.h>
int main()
{
    int i, j, k, l, n;

    scanf("%d", &n);
    n = n-2;


    for(i = 1, k =2*n-1; i <= n; i++, k = k-2)
    {
        for(j = i; j < n; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        for(j = 1; j < k; j++)
        {
            printf(" ");
        }
        for(j =1; j <=2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }


     for(i = n-1, k =2; i >= 1; i--, k++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        l = 2*k-1;
        for(j = 1; j < l; j++)
        {
            printf(" ");
        }
        for(j =1; j <=2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
