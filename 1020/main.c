#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int day, month, year;
    scanf("%lld", &day);
    year = day/365;
    day = day%365;
    month = day/30;
    day = day%30;
    printf("%lld ano(s)\n%lld mes(es)\n%lld dia(s)\n", year, month, day);

    return 0;
}
