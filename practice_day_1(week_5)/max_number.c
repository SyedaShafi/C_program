#include <stdio.h>
#include <limits.h>
int mx_number(int a[], int n, int i)
{
    if (i == n)
        return INT_MIN;
    int ans = mx_number(a, n, i + 1);
    if (ans < a[i])
    {
        return a[i];
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int ans = mx_number(a, n, 0);
    printf("%d", ans);
    return 0;
}