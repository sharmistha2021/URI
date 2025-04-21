#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    float sum=0;
    while(i<2)
    {
        long long int code, unit;
        float price;
        scanf("%lld%lld%f", &code, &unit, &price);
        sum += unit * price;
        i++;
    }
    printf("VALOR A PAGAR: R$ %.2f\n", sum);

    return 0;
}
