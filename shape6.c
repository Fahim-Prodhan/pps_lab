#include <stdio.h>
int main()
{
    int i, j, n ;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("&");
            }
            else
            {
                printf("#");
            }
        }
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("&");
            }
        }

        printf("\n");
    }

    return 0;

}
