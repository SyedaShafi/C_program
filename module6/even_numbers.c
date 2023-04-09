#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ok = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ok = 1;
            printf("%d\n", i);
        }
    }
    if (ok == 0)
        printf("-1\n");
    return 0;
}