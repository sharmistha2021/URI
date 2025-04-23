#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int sec, min, hr;
    scanf("%lld", &sec);
    min = sec / 60;
    sec = sec - min*60;
    hr = min / 60;
    min = min - hr*60;
    printf("%lld:%lld:%lld\n", hr, min, sec);
    return 0;
}
