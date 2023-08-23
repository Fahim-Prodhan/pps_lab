#include<stdio.h>
int main()
{
    int date, month, year;

    scanf("%d/%d/%d", &date, &month, &year);

    printf("%02d/%02d/%02d\n", month, date, year);
    printf("%02d/%02d/%02d\n", year, month, date);
    printf("%02d-%02d-%02d\n",date, month, year);

    return 0;

}
