#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, d;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("%.4f\n", d);
    return 0;
}
