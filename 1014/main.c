#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int dis;
    float fuel;
    scanf("%lld%f", &dis, &fuel);
    printf("%.3f km/l", dis/fuel);
    return 0;
}
