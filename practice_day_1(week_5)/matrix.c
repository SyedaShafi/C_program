#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                sum1 += a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i + j == n - 1)
                sum2 += a[i][j];
    int ans = sum1 - sum2;
    if (ans < 0)
        printf("%d", ans * -1);
    else
        printf("%d", ans);
    return 0;
}