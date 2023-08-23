#include<stdio.h>
int main()
{
    int i, j, k, n, sp, st;

    scanf("%d", &n);

    sp = n;
    st = n;


    for(i = n; i >= 1; i--)
    {
        for(j = 0; j < n - sp; j++)
        {
            printf("  ");
        }
        for(k = 1; k <= st; k++)
        {
            printf("@ ");
        }

        if(i > n/2+1)
        {
            st = st - 2;
        }
        else
        {
            st = st + 2;
        }
        if(i > n/2+1)
        {
            sp = sp - 1;
        }
        else
        {
            sp = sp + 1;
        }
        printf("\n");
    }



    return 0;
}
