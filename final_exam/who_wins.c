#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tiger = 0, pathan = 0, x, y;
    while (n--)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
            tiger++;
        else if (x < y)
            pathan++;
    }
    if (tiger > pathan)
        printf("Tiger\n");
    else if (tiger < pathan)
        printf("Pathan\n");
    else
        printf("Draw\n");
    return 0;
}