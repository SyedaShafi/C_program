#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int a[n];
    int b[m + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
        b[a[i]]++;
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}