#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int hr, speed;
    scanf("%lld%lld", &hr, &speed);
    printf("%.3lf\n", (hr*speed*1.00)/12);
    return 0;
}
