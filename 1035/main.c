#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    if(b>c && d>a)
    {
        if((c+d) > (a+b))
        {
            if(c>0 && d>0)
            {
                if(a%2 == 0)
                    printf("Valores aceitos\n");
                else
                    printf("Valores nao aceitos\n");
            }
            else
                printf("Valores nao aceitos\n");
        }
        else
            printf("Valores nao aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
    return 0;
}
