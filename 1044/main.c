#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n, m;
    scanf("%lld%lld", &n, &m);
    if(m % n == 0 || n % m == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
