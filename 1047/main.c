#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr1, min1, hr2, min2, min, hr;
    scanf("%d%d%d%d", &hr1, &min1, &hr2, &min2);

    hr = hr2 - hr1;
    if(hr < 0)
        hr +=  24;
    min = min2 - min1;
    if(min < 0)
    {
        min += 60;
        hr--;
    }
    if(hr1 == hr2 && min1 == min2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);


    return 0;
}
