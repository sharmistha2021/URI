#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    float sal, sold;
    scanf("%s",str);
    scanf("%f%f", &sal, &sold);
    printf("TOTAL = R$ %.2f\n", sal+(sold*.15));

    return 0;
}
