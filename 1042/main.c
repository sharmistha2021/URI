#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a , b , c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if(a > b && a > c)
    {
        if(b > c)
            printf("%lld\n%lld\n%lld\n", c, b, a);
        else
            printf("%lld\n%lld\n%lld\n", b, c, a);
    }
    else if(b > a && b > c)
    {
        if(a > c)
            printf("%lld\n%lld\n%lld\n", c, a, b);
        else
            printf("%lld\n%lld\n%lld\n", a, c, b);
    }
    else
    {
        if(a > b)
            printf("%lld\n%lld\n%lld\n", b, a, c);
        else
            printf("%lld\n%lld\n%lld\n", a, b, c);
    }
    printf("\n%lld\n%lld\n%lld\n", a, b, c);
    return 0;
}
