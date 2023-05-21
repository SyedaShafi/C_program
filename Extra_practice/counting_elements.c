#include <stdio.h>
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ele, a[1000 + 5] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ele);
        a[ele]++;
    }
    int ans = 0;
    for (int i = 0; i < 1004; i++)
    {
        if (a[i] != 0 && a[i + 1] != 0)
        {
            // printf("%d  %d\n", a[i], a[i + 1]);
            ans += a[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}