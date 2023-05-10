#include <stdio.h>
int mx_number(int a[], int n, int i, int mx)
{
    // printf("%d\n", mx);
    if (i == n)
        return mx;
    if (a[i] > mx)
    {
        mx = a[i];
        return mx_number(a, n, ++i, mx);
    }
    return mx_number(a, n, ++i, mx);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int ele = -1e9;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int ans = mx_number(a, n, 0, ele);
    printf("%d", ans);
    return 0;
}