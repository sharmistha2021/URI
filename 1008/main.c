#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num, hr;
    float sal_hr;
    scanf("%lld%lld%f", &num, &hr, &sal_hr);
    printf("NUMBER = %lld\nSALARY = U$ %.2f\n", num, hr*sal_hr);
    return 0;
}
