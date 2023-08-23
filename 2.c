#include <stdio.h>
int main()
{

    int x, i;
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        int rslt = x * i;
        printf("%d x %d = %d\n", x, i, rslt);
    }
    return 0;
}