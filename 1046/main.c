#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1, t2;
    scanf("%d%d", &t1, &t2);
    if(t2 > t1)
        printf("O JOGO DUROU %d HORA(S)\n", t2-t1);
    else
        printf("O JOGO DUROU %d HORA(S)\n", (24 - t1) + t2);
    return 0;
}
