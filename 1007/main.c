#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int A, B, C, D, s;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    s = (A * B - C * D);
    printf("DIFERENCA = %lld\n", s);

    return 0;
}
