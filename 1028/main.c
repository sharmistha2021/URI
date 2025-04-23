#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c1, c2, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int stack;
        scanf("%d%d", &c1, &c2);
        for(j = 1; j <= c1 && j <= c2; ++j)
        {
            if(c1 % j == 0 && c2 % j == 0)
                stack = j;
        }
        printf("%d\n", stack);
    }
    return 0;
}
