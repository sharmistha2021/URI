#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, s;
    scanf("%f %f %f", &a, &b, &c);
    s = (a*2) + (b*3) + (c*5);
    printf("MEDIA = %.1f\n", s/(2+3+5));
    return 0;
}

