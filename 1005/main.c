#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b,s;
    scanf("%lf %lf", &a, &b);
    s = (a*3.5) + (b*7.5);
    printf("MEDIA = %.5lf\n", s/(3.5+7.5));
    return 0;
}
